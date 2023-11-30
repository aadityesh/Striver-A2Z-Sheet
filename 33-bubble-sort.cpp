void bubbleSort(vector<int> &a, int n)
{
    // write your code here
    if (n == 1)
        return;
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j + 1], a[j]);
        }
    }

    bubbleSort(a, n - 1);
}

void bubbleSort(vector<int> &a, int n)
{
    // write your code here
    int swapi = 0;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {

                swap(a[j + 1], a[j]);
                swapi = 1;
            }
        }

        if (swapi == 0)
            break;
    }
}