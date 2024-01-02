#include<bits/stdc++.h>
using namespace std;
void oneton(int n)
{
    if(n>=1)
    {
        
        oneton(n-1);
        cout<<n<<" ";
        
    }
     if(n==0)
            return;
}
int main()
{
  oneton(6);
  // cout<<m;
    return 0;
}