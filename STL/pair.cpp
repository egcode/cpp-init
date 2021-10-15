/*
g++ pair.cpp -std=c++11
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    pair<int, int> p1 = { 2, 3 };
    pair<int, char> p2 = make_pair(2, 'a');
    cout<<"pair p1 : "<<p1.first<<" "<<p1.second<<endl;
    cout<<"pair p2 : "<<p2.first<<" "<<p2.second<<endl;

    // or your can make pair of pair
    pair<int, pair<int, char>> p3 = { 1, {2, 'a'}};
    cout<<"pair p3 : "<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

    return 0;
}
