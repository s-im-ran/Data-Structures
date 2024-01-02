//find the largest sum of kth consecutive elements in an array

#include <bits/stdc++.h>
using namespace std;

int maxx(int a[],int n,int k)
{  
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    int currmax=sum;
    for(int i=k;i<n;i++)
    {
        sum=sum+a[i]-a[i-k];
        currmax=max(sum,currmax);
    }
        
    
    return currmax;
}


int main()
{
    int a[]={5,-10,6,90,3};
    int n=sizeof(a)/sizeof(a[0]);
    int m=maxx(a,n,2);
    cout<<m;
    
}