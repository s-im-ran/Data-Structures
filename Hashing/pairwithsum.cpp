#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={6,3,4,2,8};
    int n=5;
    int sum=17;
    int f=0;
    unordered_set<int>u;
    for(int i=0;i<n;i++){
    if(u.find(sum-a[i])!=u.end())
    {

        cout<<true; f=1;
        break;
    }
    else
        u.insert(a[i]);

    }
    if(f==0)
    cout<<false;
    return 0;
}