#include<bits/stdc++.h>
using namespace std;
void print(vector< vector <int>> &s)
{

    if(s.size()==1 )
    {
        for(int j=0;j<s[0].size();j++)
        {
            cout<<s[0][j]<<" ";
        }
    }
    else if(s[0].size()==1)
    {
        for(int j=0;j<s.size();j++)
        {
            cout<<s[j][0]<<" ";
        }
    }
    else{
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s[i].size();j++)
        {
            if(i==0)
            {
                cout<<s[i][j]<<" ";
            }
           

        }
    }
         for(int i=0;i<s.size();i++)
       {
       
          
                if(i>0 && i<s.size()-1)
                {
                    cout<<s[i][s.size()-1]<<" ";
                }
        }
        
     for(int i=0;i<s.size();i++)
       {
        for(int j=s.size()-1;j>-1;j--)
        {
            if(i==s.size()-1)
            {
                    cout<<s[i][j]<<" ";
               
            }
        }
       }

       
    for(int i=s.size()-1;i>-1;i--)
       {
        if(i>0 && i<s.size()-1)
                {
                    cout<<s[i][0]<<" ";
                }
        }
    }
}

int main()
{
    vector <vector <int>> s;
    cout<<"enter for m and n";
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        vector <int> v;
        for(int j=0;j<n;j++)
        {
           int x;
           cout<<"enter a variable";
           cin>>x;
           v.push_back(x);

        }
        s.push_back(v);
    }
    
    print(s);
}