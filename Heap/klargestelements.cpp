//with complexity 0(k+(n-k)log k)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>pr;
    int a[]={4,5,12,67,89,23};
    int n=6;
    int k=3; //the k largest elements to be found
    for(int i=0;i<k;i++)
    {
        pr.push(a[i]);
    }
    for(int i=k;i<6;i++)
    {
        if(pr.top()>a[i])
            continue;
        else{
            pr.pop();
            pr.push(a[i]);
        }
    }
    while(pr.empty()==false)
    {
        cout<<pr.top()<<" ";
        pr.pop();
    }
    return 0;
}