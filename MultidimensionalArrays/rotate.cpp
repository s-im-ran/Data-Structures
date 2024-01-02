//Rotate a matrix anti-clockwise by 90 degrees
 #include<bits/stdc++.h>
 using namespace std;
void rotate(vector <vector <int>> &s)
{
    int m=s.size();
    int n=s[0].size();
    int v[m][n];
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
        {
            v[n-j-1][i]=s[i][j];
        }
    }

     for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
        {
           s[i][j]=v[i][j];
        }
    }

     for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
        {
           cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }


}


 int main()
 {
     vector <vector <int>> s;
     for(int i=0;i<3;i++)
     {  vector <int> v;
        for(int j=0;j<3;j++)
        {
            v.push_back(i*2+j*3);
        }
        s.push_back(v);
     }

       for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
        {
           cout<<s[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
     rotate(s);

     
 }