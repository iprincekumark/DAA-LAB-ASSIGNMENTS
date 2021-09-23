#include <bits/stdc++.h>
using namespace std;

bool jump_search(int a[], int n, int val,int &jumps)
{
    int jSize = sqrt(n), start = 0, end=jSize;
    while (a[end] <= val and end < n)
    {
        jumps++;
        start = end;
        end += jSize;
        if (end > n - 1)
            end = n;
    }
    for (int i = start; i < end; i++)
        if (a[i] == val)
            return true;
    return false;
}

int main()
{
    int t, n, val, jumps;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> val;
        jumps=1;
        if (jump_search(a, n, val,jumps))
            cout << "Present " << jumps<<"\n";
        else
            cout << "Not Present "<<jumps<<"\n";
    }
    return 0;
}