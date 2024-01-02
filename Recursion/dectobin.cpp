#include<bits/stdc++.h>
using namespace std;
void dtob(int n)
{
    if(n==0)
        return;
    else
        dtob(n/2);
        cout<<n%2;
}
int main()
{
    dtob(6);
}