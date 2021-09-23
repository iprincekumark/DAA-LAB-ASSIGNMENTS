#include <iostream>
using namespace std;

int binarySearch(int a[], int low, int high, int val,int &check)
{
    while (low <= high)
    {
        check++;
        int mid = (high + low) / 2;
        if (a[mid] == val)
            return mid + 1;
        else if (a[mid] < val)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int t, n, val, check, pos;
    cin>>t;
    while(t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> val;
        check=0;
        pos = binarySearch(a, 0, n - 1, val, check);
        if (pos >= 0)
            cout << "Present "<<check<<"\n";
        else
            cout << "Not Present "<<check<<"\n";
    }
    return 0;
}