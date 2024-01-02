#include <bits/stdc++.h>
using namespace std;
void left_r(int arr[],int n,int k)
{
     int temp[k];
        for(int j=0;j<k;j++)
        {
            temp[j]=arr[j];
        }
    for(int i=0;i<n-k;i++)
    { 
        arr[i]=arr[i+k];
    }
    for(int i=n-k;i<n;i++)
    {
        arr[i]=temp[i-(n-k)];
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int k;
    cout<<"enter for k";
    cin>>k;
    left_r(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
