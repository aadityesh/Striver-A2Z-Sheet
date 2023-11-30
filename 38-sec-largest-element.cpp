int second_maximum(int n, vector<int> &a)
{

    int maxOne = a[0];
    int maxTwo = -1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxOne)
        {
            maxTwo = maxOne; // 5, 7
            maxOne = a[i];
        }

        else if (a[i] < maxOne && a[i] > maxTwo)
            maxTwo = a[i];
    }

    return maxTwo;
}

int second_minimum(int n, vector<int> &a)
{

    int minOne = a[0];
    int minTwo = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < minOne)
        {
            minTwo = minOne;
            minOne = a[i];
        }

        else if (a[i] > minOne && a[i] < minTwo)
            minTwo = a[i];
    }

    return minTwo;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // Write your code here.
    int secondMax = second_maximum(n, a);
    int secondMin = second_minimum(n, a);

    return {secondMax, secondMin};
}
