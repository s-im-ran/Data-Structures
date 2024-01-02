//check if an array is sorted or not
#include <bits/stdc++.h>
using namespace std;
bool sor(int arr[],int n)
{
   
    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
            
        }
      
    }
    return true;
   
}
int main()
{
    int arr[]={7,4,5};
    bool b=sor(arr,3);
    cout<<b;

}