//to find existence of an array with zero sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={-3,4,3,-7,1};
    int n=5;
    int prefix_sum=0;
    unordered_set<int>u;
    int f=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum=prefix_sum+a[i];

        if(u.find(prefix_sum)!=u.end()){
            cout<<true;
            f=1;}
        
        if(prefix_sum==0){
            cout<<true;
            f=1;}

        else
            u.insert(prefix_sum);
    }
    if(f==0)
        cout<<false;
    return 0;
}