#include <bits/stdc++.h>
using namespace std;
void mov(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-i-1;j++){
        if(arr[j]==0)
        {
            swap(arr[j],arr[j+1]);
        }
        }
       
    }
}
int main()
{
    int arr[]={1,0,9,-1,3,0,8,0};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    mov(arr,n);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
       
    }
    return 0;
}
