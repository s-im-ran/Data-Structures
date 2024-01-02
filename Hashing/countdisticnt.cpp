#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{   unordered_set<int>u;
     int a[]={10,20,30,10,30,20};
     int n=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<n;i++)
     {
        u.insert(a[i]);
     }
     cout<<u.size();
     for(auto x=u.begin();x!=u.end();x++)
     {
        cout<<*x<<" ";
     }
    return 0;
}