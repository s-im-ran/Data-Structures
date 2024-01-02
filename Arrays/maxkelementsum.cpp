#include <bits/stdc++.h>
using namespace std;

int maxx(int a[],int n,int k)
{   int currmax=INT_MIN;
    int sum=0;
    for(int i=0;i<n-k;i++)
    {
        for(int j=i;j<k+i;j++)
        {
            sum=sum+a[j];
        }
        if(sum>currmax)
        {
            currmax=sum;
        }
        sum=0;
        
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