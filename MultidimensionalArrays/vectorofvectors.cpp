#include <bits/stdc++.h>
using namespace std;
int main()
{
vector <vector <int>>s;
for(int i=0;i<3;i++){
vector <int>v;
for(int j=0;j<3;j++)
{
    v.push_back(i+j+2);
}
s.push_back(v);
}


for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
{
   cout<<s[i][j]<<" ";
}
cout<<endl;
}

}