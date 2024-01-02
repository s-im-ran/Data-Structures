#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=7;
    int n2=13;
    
    int p1=min(n1,n2);
    int hcf;
    for(int i=1;i<=p1;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf;
}