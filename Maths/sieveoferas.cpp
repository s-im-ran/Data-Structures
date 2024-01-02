#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{ int f=0;
   for(int i=2;i<=sqrt(n);i++)
   {
    if(n%i==0)
    {
        f=-1;
        break;
    }
   } 
   if(f==0)
        cout<<n<<" ";
}
void seive(int n)
{
    for(int i=2;i<=n;i++)
    {
        prime(i);
    }
}
int main()
{
     seive(23);   
    return 0;
}