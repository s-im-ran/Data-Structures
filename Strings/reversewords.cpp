#include <bits/stdc++.h>
using namespace std;
void reverse(char s[],int low,int high)
{
    //int low=0,high=n-1;
    while(low<=high){
    swap(s[low],s[high]);
    high--;
    low++;
    }
}
void revwords(char s[],int n)
{
    int start=0,end=0;
    for(end=0;end<n;end++)
    {
        if(s[end]==' ')
        {
         reverse(s,start,end-1);
         start=end+1;
        }
    }
    reverse(s,start,n-1);
    reverse(s,0,n-1);
}
int main()
{
    char s[]="I want to become a software engineer.";
    int n=sizeof(s);
    revwords(s,n);
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    revwords(s,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
}