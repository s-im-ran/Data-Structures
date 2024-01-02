
#include<bits/stdc++.h>
using namespace std;

class hashing {
public:
    int *arr;
    int cap, size;

    hashing(int c) {
        cap = c;
        size = 0;
        arr = new int[cap]; // Allocate memory for the array
        for (int i = 0; i < cap; i++) {
            arr[i] = -1;
        }
    }

    int hash(int key) {
        return key % cap;
    }

    bool search(int key) {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1 && arr[i] != -2) {
            if (arr[i] == key)
                return true;
            i = (i + 1) % cap;
            if (i == h)
                return false;
        }
        return false;
    }

    bool insert(int key) {
        if (size == cap)
            return false;
        int i = hash(key);
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
            i = (i + 1) % cap;

        if (arr[i] == key)
            return false;
        else {
            arr[i] = key;
            size++;
            return true;
        }
    }

    bool erase(int key) {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1 && arr[i] != -2) {
            if (arr[i] == key) {
                arr[i] = -2;
                size--;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
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

int main() {
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
//This should address the issues and ensure that the linear probing with open addressing behaves as expected. If you encounter any specific errors or unexpected behavior, please provide more details so that I can assist you further.