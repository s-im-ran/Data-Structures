#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=36;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            int x=i;
            cout<<x<<" ";
            if(x!=n/i)
            {
                cout<<n/i<<" ";
            }
            else
                continue;
        }
    }
}