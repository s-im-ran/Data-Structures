#include <bits/stdc++.h>
using namespace std;
 void reve(int arr[],int n)
 {
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;

    }
 }
int main()
{
    int arr[]={7,4,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    reve(arr,3);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}