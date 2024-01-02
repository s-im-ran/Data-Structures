#include <iostream>
using namespace std;

int  search(int arr[],int x){
    for(int i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    
    }
    return -1;
}


int main()
{
    int arr[5]={1,3,5,7,9};
    int x;
    cout<<"Enter number to be searched";
    cin>>x;
    int f=search(arr,x);
    if(f==-1)
    {
        cout<<"Number is not there in the array";
    }
    else{
        cout<<"Number is present in position"<<f;
    }

}
