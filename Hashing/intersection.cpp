//union of two unsorted arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[]={1,20,50};
    int b[]={45,56,50,20,9};
    int n=sizeof(b)/sizeof(b[0]);
    unordered_set <int>u;
    u.insert(b,b+n);
    for(int i=0;i<3;i++)
    {
        if(u.find(a[i])!=u.end())
        {
            cout<<a[i]<<" "<<endl;
        }
    }
    return 0;
}