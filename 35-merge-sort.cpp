
void merge(vector<int> &a, int start, int end)
{

    int mid = (start + end) / 2;
    int left = start;
    int right = mid + 1;

    vector<int> temp;

    while (left <= mid && right <= end)
    {
        if (a[left] < a[right])
            temp.push_back(a[left++]);
        else
            temp.push_back(a[right++]);
    }

    while (left <= mid)
        temp.push_back(a[left++]);

    while (right <= end)
        temp.push_back(a[right++]);

    /* the merge function is merging two sorted halves of an array.
    The range [start, end] represents the portion of the array
    that needs to be sorted and merged.
    The start and end parameters specify the indices of this range.*/
    for (int i = start; i <= end; i++)
        a[i] = temp[i - start];
}

void mergeSort(vector<int> &a, int start, int end)
{
    // Write Your Code Here
    if (start == end)
        return;

    int mid = (start + end) / 2;

    mergeSort(a, start, mid);
    mergeSort(a, mid + 1, end);

    merge(a, start, end);
}