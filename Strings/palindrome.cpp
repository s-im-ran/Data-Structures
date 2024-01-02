#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="racecar";
    int flag=0;
    int n=str.length();
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
          {    
                flag=-1;
                break;
          }
    }
    if(flag==0)
    {
        cout<<"Yes,a palindrome";
    }
    else if(flag==-1)
    {
        cout<<"Not a palindrome";
    }
    return 0;
   
}