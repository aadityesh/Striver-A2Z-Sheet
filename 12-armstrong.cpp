#include <bits/stdc++.h>

using namespace std;
int calcArmstrong(int num)
{

    string s = to_string(num);

    if (s.length() == 1)
    {
        return num;
    }

    int armstrong = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        int len = s.length();
        // cout << len << endl;
        int product = 1;
        while (len--)
        {
            product *= lastDigit;
        }
        cout << "lastDigit: " << product << endl;
        armstrong += product;
        cout << "armstrong: " << armstrong << endl;

        num /= 10;
    }

    return armstrong;
}

bool checkArmstrong(int n)
{
    // Write your code here
    if (calcArmstrong(n) == n)
        return true;

    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << checkArmstrong(n) << endl;

    return 0;
}
