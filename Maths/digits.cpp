#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=12345;
    int c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    cout<<c;
    
}