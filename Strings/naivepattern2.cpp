//This is used to achieve pattern searching(only for patterns with all distinct characters)
//in linear time as the increasing the iterations in
//the inner loop reduce the iterations in 
//outer loop
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="is a dinosaur";
    string pat="dino";
    int n=s.size();
    int m=pat.size();
    for(int i=0;i<n-m+1;)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(s[i+j]!=pat[j])
                break;
          
        }
        if(j==m)
            cout<<i<<" ";
        if(j==0)
            i=i+1;
        else
            i=i+j;
    }
}