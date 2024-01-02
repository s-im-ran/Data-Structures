#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
unordered_map <string,int>m;
m["a"]=10;
m["b"]=30;
m.insert({"c",20});
for(auto x: m)
{
    cout<<x.first<<x.second<<endl;
}
auto it=m.find("b");
if(it!=m.end())
        cout<<it->second;
return 0;
}