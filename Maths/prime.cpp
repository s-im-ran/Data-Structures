#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;  
      int n=14;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            cout<<"false";
            flag=-1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"yes,prime";
    }
}