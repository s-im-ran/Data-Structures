#include<bits/stdc++.h>
using namespace std;
int factorial(int n,int k=1)
{
    if(n==1 || n==0)
        return k;
    else
    {   
       return factorial(n-1,k*n);
        
    }
}
int main()
{
    int m=factorial(4);
    cout<<m;
    return 0;
}