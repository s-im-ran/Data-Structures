#include <bits/stdc++.h>
using namespace std;
int ma(int arr[],int n)
{
    int m=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
      
    }
    int s_l=arr[0];
      for(int i=0;i<n;i++)
    {
        if(arr[i]>s_l && arr[i]<m){
            s_l=arr[i];
        }
      
    }
    return s_l;
}
int main()
{
    int arr[]={3,4,5};
    int m=ma(arr,3);
    cout<<m;

}