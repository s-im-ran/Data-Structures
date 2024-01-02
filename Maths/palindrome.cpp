#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1211;
    int p=a;
    int rem=0,sum=0;
       while(a>0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;

    }
    if(sum==p)
        cout<<"yes";
    else
        cout<<"no";
}