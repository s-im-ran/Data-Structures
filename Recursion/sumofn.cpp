#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    int s=sum(6);
    cout<<s;
    return 0;
}