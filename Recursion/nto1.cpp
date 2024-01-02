#include<bits/stdc++.h>
using namespace std;
void serial(int n)
{
    if(n==0)
        return;
    else{
        cout<<n<<" ";
        serial(n-1);
         }
}
int main()
{
    serial(6);

}

//recurrence relation is =t(n)=t(n-1)+theta(1)
//since n+1 stacks might be present its space complexity is theta(n)