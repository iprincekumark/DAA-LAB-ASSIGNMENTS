#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *a, int n, int *count, int *swaps)
{
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX, idx;
        for (int j = i; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                idx = j;
            }
            (*count)++;
        }
        swap(a[i], a[idx]);
        (*swaps)++;
    }
}

int main()
{
    int t, count, swaps, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        count = 0, swaps = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        selectionSort(a, n, &count, &swaps);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
        cout << "Comparisons : " << count - swaps << endl<< "Swaps : " << swaps - 1 << endl;
    }
    return 0;
}