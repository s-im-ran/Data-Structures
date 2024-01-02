#include<bits/stdc++.h>
using namespace std;
int log3(int n)
{
    if(n<3)
        return 0;
    else    
        return 1+log(n/3);
}

int log2(int n)
{
    if(n==1)
        return 0;
    else    
        return 1+log(n/2);
}
int main()
{
   int l3=log3(27);
      cout<<l3;
    int l2=log2(16);
        cout<<endl<<l2;

}