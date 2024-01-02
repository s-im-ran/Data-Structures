#include <bits/stdc++.h>
using namespace std;
int dist(int arr[],int n)
{
    int rev=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[rev-1])
        {
            arr[rev]=arr[i];
            rev++;
        }
    }
    return rev;
}
int main()
{
    int arr[]={10,10,20,10,20,20,30,30,30};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int num=dist(arr,n);
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
