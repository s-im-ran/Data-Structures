#include <bits/stdc++.h>
using namespace std;
bool sum(int a[],int n,int s)
{
    int cursum=0;
    for(int i=0;i<n;i++)
    {
        cursum=a[i];
    
        for(int j=i+1;j<n;j++)
        {
            if(cursum==s)
                return true;
            else
            
                cursum=cursum+a[j];
            
            
           
        }
    }
        if(cursum==s)
                return true;
    return false;
    }
    

int main()
{
    int a[]={1,4,0,0,3,10,5};
    int n=sizeof(a)/sizeof(a[0]);
    bool s=sum(a,n,7);
    cout<<s;
}