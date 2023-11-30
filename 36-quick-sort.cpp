int partitionArray(int a[], int start, int end)
{
    // Write your code here
    int pivot = a[start];
    int i = start;
    int j = end;

    while (i < j)
    {

        while (a[i] <= pivot && i <= end - 1)
            i++;

        while (a[j] > pivot && j >= start + 1)
            j--;

        if (i < j)
            swap(a[i], a[j]);
    }

    swap(a[j], a[start]);
    return j;
}

void quickSort(int input[], int start, int end)
{

    if (start >= end)
        return;

    int partition = partitionArray(input, start, end);
    quickSort(input, start, partition - 1);
    quickSort(input, partition + 1, end);
}