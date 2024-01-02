#include <bits/stdc++.h>
using namespace std;
int ins(int arr[],int pos,int n,int x,int cap)
{
  
   
    if(n==cap)
    {
        return n;
    }
    
    else{
        for(int i=n-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=x;

        return n+1;
    }
    
        
    }

int main()
{
    int arr[]={1,5,7};
    int num=sizeof(arr)/sizeof(arr[0]);
    cout<<num;
    int length=ins(arr,2,num,3,5);
    cout<<endl<<length<<endl;
    for(int j=0;j<length;j++)
        {
            cout<<arr[j]<<" ";
        }
   // cout<<length;
    return 0;

}