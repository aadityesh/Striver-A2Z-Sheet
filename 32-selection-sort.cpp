void selectionSort(vector<int> &a)
{
    // Write your code here.

    int n = a.size();

    for (int i = 0; i < n; i++)
    {

        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[mini] > a[j])
                mini = j;
        }
        swap(a[i], a[mini]);
    }
}
/*
void selectionSort(vector<int> &a, int i, int n) {
  // Write your code here.

  if (i == n)
    return;


  int mini = i;
  for (int j = i + 1; j < n; j++) {
    if (a[mini] > a[j])
      mini = j;
  }
  swap(a[i], a[mini]);

  selectionSort(a, i+1, n)
}*/
