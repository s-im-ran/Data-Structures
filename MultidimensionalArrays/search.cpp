//to  search effiecientlyif  a value 'x' is present in a
//row wise and column wise sorted matrix;

#include<bits/stdc++.h>
using namespace std;
int find(vector <vector <int>> &s,int x)
{
int r=s.size();
int c=s[0].size();
if(x<s[0][0])
    return -1;
if(x>s[r-1][c-1])
    return -1;
else
{   int i=0;
    int j=c-1;
    while(i<r && j>-1)
    {
    if(x==s[i][j])
    {   
        cout<<x<<" found at position "<<"("<<i<<","<<j<<")";
        
        break;
    }
    if(x>s[i][j])
    {
        i++;
    }

    if(x<s[i][j])
    {
        j--;
    }
    }
}


}




int main()
{   int k=1;
    vector <vector <int>> s;
    for(int i=0;i<4;i++)
    { vector <int>v;
   for(int j=0;j<4;j++)
   {
      v.push_back(k);
      k++;
   }
    s.push_back(v);

 }
     int x=15;
     int f=find(s,x);
     
    if(f==-1)
        cout<<"not found";
}