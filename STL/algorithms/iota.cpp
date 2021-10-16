/*
g++ iota.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[5] = {0};
    char c[3] = {0};
    
    /*
     The Iota Algorithm The algorithm iota() creates a range of sequentially increasing values
    */
    iota(a, a+5, 10); // changes a to {10, 11, 12, 13, 14}
    for (auto i : a)
        cout<< i<<" ";
    cout << "\n";

    iota(c, c+3, 'a'); // {'a', 'b', 'c'}
    for (auto i : c)
        cout<< i <<" ";
    cout << "\n";

    return 0;
}
