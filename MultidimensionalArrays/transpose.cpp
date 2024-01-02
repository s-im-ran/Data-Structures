#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"matrix before transposing"<<endl;
    int m=sizeof(s)/sizeof(s[0]);
    int temp[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m/s[0][0];j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matrix after transposing"<<endl;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<m/s[0][0];j++)
        {
            temp[j][i]=s[i][j];
        }
    }

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<m/s[0][0];j++)
        {
           s[i][j]= temp[i][j];
        }
    }

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<m/s[0][0];j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}