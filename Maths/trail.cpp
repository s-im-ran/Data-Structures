//tocount trailing zeroes in factorial of a number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    int p=1;
    for(int i=n;i>0;i--)
    {
        p=p*i;
    }
    cout<<p;

int rem=0,c=0;
while(n>0)
{
     rem=p%10;
    if(rem==0)
        c++;
    n=n/10;
}

cout<<endl<<c;
}