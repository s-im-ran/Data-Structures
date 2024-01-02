// In this particular problem, we are presented with an array of integers, 
// and our objective is to find the union of the arrays and print the number of elements in the union. 
// To accomplish this, we will explore two distinct approaches: 
// a Naive approach utilizing nested loops, and an Efficient solution employing Hashing .
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,20,50};
    int b[]={45,56,50,20,9};
    int n=sizeof(b)/sizeof(b[0]);
    unordered_set <int>u;
    u.insert(b,b+n);
    u.insert(a,a+3);
    cout<<u.size();
    return 0;
}