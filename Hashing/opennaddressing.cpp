#include <bits/stdc++.h>
using namespace std;
class hashing{
    public:
    int cap;
    int size;
    int *arr;
    hashing(int c)
    {
        cap=c;
        for(int i=0;i<cap;i++)
        {
            arr[i]=-1;

        }
        size=0;
    }

    bool insert(int key)
    {
        if(size==cap)
            return false;
        int i=key%cap;
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
            i=(i+1)%cap;
        if(arr[i]==key)
            return false;
        else
            {
                arr[i]=key;
                size++;
                return true;
            }
    }

    bool erase(int key)
    {
        int h=key%cap;
        int i=h;
        while(arr[i]!=-1 && arr[i]!=2){
            if(arr[i]==key)
            {
                arr[i]=-2;
                size--;
                return true;
            }
            else
            {
                i=(i+1)%cap;
                if(i==h)
                    return false;

            }
            return false;
        }
            
        
    }

    bool search(int key)
    {
        int h=key%cap;
        int i=h;
        while(arr[i]!=-1 && arr[i]!=-2)
        {
            if(arr[i]==key)
            {
                return true;
            }
            i=(i+1)%cap;
            if(i=h)
                return false;

        }
        return false;
    }
    
    void disp() {
        for (int i = 0; i < cap; i++) {
            cout << i << " -> " << arr[i] << " ";
              cout << endl;
        }
        cout << endl;
    }
};
int main()
{
   int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a) / sizeof(a[0]);
    hashing h(7);

    for (int i = 0; i < n; i++) {
        bool z = h.insert(a[i]);
    }
    h.disp();
    bool x = h.erase(12);
    bool zx = h.search(45);
    cout << zx;
    cout << endl;
    h.disp();

    return 0;
}