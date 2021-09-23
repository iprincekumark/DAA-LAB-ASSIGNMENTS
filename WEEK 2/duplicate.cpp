#include <iostream>
using namespace std;

int binarySearchStart(int a[], int l, int h, int key, int &start)
{
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            start = mid;
            h = mid - 1;
        }
        else if (a[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return start;
}

int binarySearchEnd(int a[], int l, int h, int key, int &end)
{
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            end = mid;
            l = mid + 1;
        }
        else if (a[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return end;
}

int main()
{

    int t, n, key, start, end;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> key;
        start = -1;
        if (binarySearchStart(a, 0, n - 1, key, start) < 0)
            cout << "Not Present!"<< "\n";
        else
        {
            end = -1;
            binarySearchEnd(a, 0, n - 1, key, end);
            cout << key << " - " << end - start + 1 << "\n";
        }
    }
    return 0;
}