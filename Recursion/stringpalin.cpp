//recurrence relation is t(n)=t(n-2)+theta(1)
#include<bits/stdc++.h>
using namespace std;
bool palind(string & s,int start,int end)
{
    if(start>=end)
        return true;
    return (s[start]==s[end]) && palind(s,start+1,end-1);
}
int main()
{   string s;cin>>s;
    int n=s.length();
    bool pa=palind(s,0,s.length()-1);

    cout<<pa<<endl;
}