#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, k, n, count, l, r;
    cin>>t;
    while(t--){
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> k;
        sort(a,a+n);
        count = 0;
        l=0,r=0;
        while(r<n){
            if(a[r]-a[l]==k){
                count++;
                l++;
                r++;
            }
            else if(a[r]-a[l]>k)
                l++;
            else
                r++;
        }
    cout << count<<"\n";
    }
    return 0;
}
