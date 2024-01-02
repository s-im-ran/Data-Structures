#include<bits/stdc++.h>
using namespace std;
void towerofhanoi(int n ,char src,char aux,char dest)
{
    if(n==1){
        cout<<"Move disk 1 from"<<src<<"to"<<dest<<endl;
        return;
    }
    towerofhanoi((n-1),src,dest,aux);
    cout<<"Move disk"<<n<<"from"<<src<<"to"<<dest<<endl;
    towerofhanoi((n-1),aux,src,dest);
}
int main()
{
    towerofhanoi(3,'A','B','C');
    return 0;
}