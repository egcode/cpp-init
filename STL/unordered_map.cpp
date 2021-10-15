/*
g++ unordered_map.cpp -std=c++17;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<char,int> mymap;
    // map<char,int>::iterator it;

    mymap['a']=50;
    mymap['b']=100;
    mymap['c']=150;
    mymap['d']=200;

        cout << "Iterate and print keys \n";
    for( const pair<char, int>& n : mymap ) {
        cout << "Key:[" << n.first << "] Value:[" << n.second << "]\n";
    }

    cout << "Iterate using auto:\n";
    for( const auto& n : mymap ) {
        cout << "Key:[" << n.first << "] Value:[" << n.second << "]\n";
    }

    cout << "Iterate using structured binding (since C++17):\n";
    for( const auto& [key, value] : mymap ) {
        cout << "Key:[" << key << "] Value:[" << value << "]\n";
    }


    cout << "\nCheck if 'b' key in map" << endl;

    // Key is not present
    // if (mymap.find('b') != mymap.end()) {
    cout << "mymap.count('b'): " << mymap.count('b') << endl;
    if (mymap.count('b')) {        
        cout << "'b' key is in the map" << endl;
    } else {
        cout << "'b' key is Not in the map" << endl;
    }    
    

    return 0;
}
