#include<bits/stdc++.h>
using namespace std;

int reverseArray(int n, int arr[])
{
    cin>>n;
    for(int i =0; i<n ; i++)
    {
        cin>>arr[i];
    }
    reverse(arr, arr+n);
    for(int i =0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main()
{
    int n{0};
    int arr[n];
    reverseArray(10, arr);
    return 0;
}