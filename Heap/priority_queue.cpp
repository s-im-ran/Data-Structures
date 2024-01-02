#include <iostream>
#include <queue>
using namespace std;
int main()
{   //implementing max hep
    priority_queue<int>pr;
    pr.push(10);
    pr.push(89);
    pr.push(-12);
    pr.push(6);
    pr.push(123);
    while(pr.empty()==false)
    {
        cout<<pr.top();
        pr.pop();
        cout<<" ";
    }
    cout<<endl;
    //implementing min heap

    priority_queue<int,vector <int>,greater<int>>p;
    p.push(100);
    p.push(89);
    p.push(12);
    p.push(66);
    p.push(123);
    while(p.empty()==false)
    {
        cout<<p.top();
        p.pop();
        cout<<" ";
    }
}