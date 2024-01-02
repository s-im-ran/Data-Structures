#include<bits/stdc++.h>
using namespace std;
class hashing{
public:
    int bucket;
    list<int>*table;
    hashing(int bucket)
 {
    this->bucket=bucket;
    table=new list<int>[bucket];
  }


  void insert(int key)
  {
    int index=key%bucket;
    table[index].push_back(key);
  }


    void remove(int key)
    {
        int index=key%bucket;
        table[index].remove(key);
    }


    bool search(int key)
    {
        int index=key%bucket;
        for(auto x: table[index])
            if(x==key)
                return true;
        return false;
    }

    void display()
    {
        for(int i=0;i<bucket;i++)
        {
            cout<<i;
            for(auto x : table[i])
            {
                cout<<" --> "<<x;
                
            }
            cout<<endl;
        }
    }

};
int main()
{
    int a[]={15, 11, 27, 8, 12};
    int n=sizeof(a)/sizeof(a[0]);
    hashing h(7);

    for(int i=0;i<n;i++)
    {
        h.insert(a[i]);
    }
    h.display();
    h.remove(12);
    bool zx=h.search(45);
    cout<<zx;
    cout<<endl;
    h.display();
    return 0;
}