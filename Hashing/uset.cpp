#include <iostream>

#include <unordered_set>
using namespace std;
int main()
{
    unordered_multiset<int> u;
    u.insert(10);
    u.insert(5);
    u.insert(15);
    u.insert(25);
    u.erase(25);
    cout<<u.size()<<" ";
    for(auto it=u.begin();it!=u.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<u.count(9)<<" "<<u.count(15);
    
    return 0;
}