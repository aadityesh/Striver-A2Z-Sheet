#include <bits/stdc++.h>
using namespace std;
void insertElement(int x, vector<string> &a)
{
    if (x == 0)
        return;

    insertElement(x - 1, a);
    a.push_back("Coding Ninjas");
}

vector<string> printNTimes(int n)
{
    // Write your code here.
    vector<string> a;
    insertElement(n, a);
    return a;
}
void printNTimes(string name, int n)
{
    if (n == 0)
        return;

    printNTimes(name, n - 1);
    cout << name << " ";
}

int main()
{
    printNTimes("abcd", 5);
    return 0;
}