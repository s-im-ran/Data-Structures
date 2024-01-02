#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1="simran";
    int n=s1.length();
   for(int i=0;i<n/2;i++)
   {
       swap(s1[i],s1[n-i-1]);
       
   }
   cout<<s1<<endl;
   return 0;
}