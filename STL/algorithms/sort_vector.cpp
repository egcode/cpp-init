/*
g++ sort_vector.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

bool way_to_sort(int i, int j) { return i > j; }

int main(){

    // The following list type initialization is only supported in versions after C++11
    vector<int> vec = {56, 32, -43, 23, 12, 93, 132, -154};
    
    sort(vec.begin(), vec.end());
    cout << "Sorted \n";
    for (auto x : vec)
        cout << x << " ";

    cout << endl;

    sort(vec.begin(), vec.end(), way_to_sort);
    cout << "Sorted reverse \n";
    for (auto x : vec)
        cout << x << " ";


    return 0;
}
