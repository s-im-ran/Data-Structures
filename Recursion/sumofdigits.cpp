#include<bits/stdc++.h>
using namespace std;
int sum(int n,int k=-1)
{
    if(n>0)
        return pow(10,k+1)*(n%10) +sum(n/10);
    if(n=0)
    {
        return 0;
    }
    
}
int main()
{   
    cout<<sum(594);
    return 0;
}