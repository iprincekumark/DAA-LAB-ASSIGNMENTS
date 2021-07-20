#include <iostream>
using namespace std;
void Linear_Search(int A[], int value, int n);
int  main()
{
    int i, search, num;
    cout<<"No. of elements: ";
    cin>>num;
    int array[num];
    cout<<"Enter the elements:- \n";
    for (i = 0; i < num; i++)
        cin>> array[i];
    cout<<"Element to search for: ";
    cin>>search;
    Linear_Search(array,search,num);
    return 0;
}
void Linear_Search(int A[], int value, int n) {   
    int flag = 0, i=0;
    for (i = 0; i < n ; i++) {
        if (value == A[i] )
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout<<"Element is present at position "<<i+1 <<" in the array.";
    else
        cout<<"Element is not present in the array.";
}