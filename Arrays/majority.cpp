#include <bits/stdc++.h>
using namespace std;
int major(int a[],int n)
{   int flag=-1;
    for(int i=0;i<n;i++)
    {   int c=0;
        int pos=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                pos=i;
            }
        }
        if(c>n/2)
        {   flag=0;
            return pos;
            
            
        }
    }
    return flag;
}
   

int main()
{
   int  arr[]={3,7,4,7,7,5};
    int m=major(arr,6);
    cout<<m;
    return 0;
}