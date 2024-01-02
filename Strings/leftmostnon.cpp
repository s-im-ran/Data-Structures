//gives the index of the left most non-repeating character
#include <bits/stdc++.h>
using namespace std;

void leftmostnon(string s1)
{
    const int ch =128;
    int f=-1;
   int count[ch]={0};
   for(int i=0;i<s1.length();i++)
   {
       count[s1[i]]++;
   }
   for(int i=0;i<s1.length();i++)
   {
       if(count[s1[i]]==1)
            {
                cout<<i;
                f=0;
                break;
            }
    
   }
  if(f==-1)
        cout<<f;
}


int main()
{
    string s1="simran";
   leftmostnon(s1);
   return 0;
}