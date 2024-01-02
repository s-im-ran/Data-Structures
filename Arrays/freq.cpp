#include <bits/stdc++.h>
using namespace std;
void freq(int a[], int n){
    for(int i=0;i<n;i++)
    {   int c=1;
        if(a[i]!=a[i-1])
        {
        for(int j=i+1;j<n;j++)
        {   
                if((a[i]==a[j]) )
                {
                    c++;
                }
        }
     
        cout<<a[i]<<" "<<c<<endl;
        }
    }
    
}
int main()
{
    int arr[]={10,10,10,25,30,30};
    int n=6;
    
    freq(arr,6);
  
}
