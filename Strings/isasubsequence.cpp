#include <bits/stdc++.h>
using namespace std;
bool subq(string s1,string s2)
{  int m=s1.length();
    int n=s2.length();
    if(s2=="")
        return true;
    else
    {
        if(n>m)
            return false;
        else
        {   int j=0;
            for(int i=0;i<m && j<n;i++)
            {
                if(s1[i]==s2[j])
                {
                    j++;
                }
                else
                    i++;
            
            }
            return(j==n);
        }
    }
}
int main()
{
    string s1="abcd";
    string s2="ad";
    bool m=subq(s1,s2);
    cout<<m;
}