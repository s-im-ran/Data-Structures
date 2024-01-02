#include <bits/stdc++.h>
using namespace std;
void stocks(int a[], int n){
    int profit=0;
    for(int i=1;i<n;i++)
    {   
        if(a[i]>a[i-1])
        {
            profit=profit+a[i]-a[i-1];
        }
     
      
    }
    cout<<profit;
    
}
int main()
{
    int arr[]={30,20,10};
    int n=5;
    
    stocks(arr,3);
  
}