#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low, j = high;
    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
            swap(a[i], a[j]);
    } while (i < j);
    swap(a[low], a[j]);
    return j;
}

int partitionRandom(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(arr[random], arr[low]);
    return partition(arr, low, high);
}

void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partitionRandom(a, low, high);
        QuickSort(a, low, p);
        QuickSort(a, p + 1, high);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        QuickSort(a, 0, n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
