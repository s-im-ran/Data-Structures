#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int>u;
    int a[]={10,20,30,10,30,20};
     int n=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<n;i++)
     {
        u[a[i]]++;
     }
     for(auto x:u)
     {
        cout<<x.first<<" "<<x.second<<endl;
     }
}