
void insertionSort(int a[], int n)
{
    // write your code here
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
}

/*
void insertionSort(int a[], int i, int n) {
  // write your code here
  if (i == n)
    return;

  int j = i;
  while (j > 0 && a[j - 1] > a[j]) {
    int temp = a[j];
    a[j] = a[j - 1];
    a[j - 1] = temp;
    j--;
  }
  insertionSort(a, i, n);
}
*/