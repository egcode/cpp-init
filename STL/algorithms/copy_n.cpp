/*
g++ copy_n.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int source[5] = {0, 12, 34, 50, 80};
    int target[5];

    cout << "Target before copy: "<< endl;
    for (auto i: target)
        cout<<i<<" ";
    cout<<"\n";

    // copy 5 elements from source to target
    copy_n(source, 5, target);

    cout << "Target after copy: "<< endl;
    for (auto i: target)
        cout<<i<<" ";
    cout<<"\n";

    return 0;
}
