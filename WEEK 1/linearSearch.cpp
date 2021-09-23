#include <iostream>
using namespace std;

bool linear_search(int a[], int n, int k, int &checkCount)
{
    int i;
    for (i = 0; i < n; i++)
    {
        checkCount++;
        if (a[i] == k)
            return true;
    }
    return false;
}
int main()
{
    int t, n, k, checkCount;
    cin >> t;
    while (t--)
    {
        checkCount = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin>>k;
        if (linear_search(a, n, k, checkCount))
            cout << "Present " <<checkCount<< "\n";
        else
            cout << "Not Present " <<checkCount<< "\n";
    }
    return 0;
}