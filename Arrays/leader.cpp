/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void lead(int a[],int n)
{
    //cout<<a[n-1]<<endl;
    int curr_max=a[n-1];
    cout<<curr_max<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>curr_max)
        {
            curr_max=a[i];
            cout<<curr_max<<" ";
        }   
        }
    
}
int main()
{
    int arr[]={6,5,4,3,2,1};
    int n=6;
    
    lead(arr,6);
  
}
