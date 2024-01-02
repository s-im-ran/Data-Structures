//this program return all the positions where a pattern is present in a string
//the time complexity of the code is(O((n-m+1)*m)) which is quadratic in nature
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="vivek viv vivekika";
    string pattern="viv";
    int n=s.size();
    int m=pattern.size();
    for(int i=0;i<n-m+1;i++)
    {   
        int j;
        for(j=0;j<m;j++)
        {
            if(pattern[j]!=s[i+j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }
    }
}