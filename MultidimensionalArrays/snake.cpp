#include<bits/stdc++.h>
using namespace std;
void print(vector< vector <int>> &s)
{
    for(int i=0;i<s.size();i++)
    {   if(i%2==0){
        for(int j=0;j<s[i].size();j++)
        {
            cout<<s[i][j]<<" ";
        }
         }
        else
        {
            for(int j=s[i].size()-1;j>-1;j--)
            {
                cout<<s[i][j]<<" ";
            }
        }
    }
}
int main()
{
    vector <vector <int>> s;
    for(int i=0;i<3;i++)
    {
        vector <int> v;
        for(int j=0;j<3;j++)
        {
            v.push_back(3*i+2*j);

        }
        s.push_back(v);
    }

    print(s);
}