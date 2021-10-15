/*
g++ map.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    map <string, string> companies;

    companies["Google"] = "GGG";
    companies["Facebook"] = "FFFF";

    // insertion can also be done as
    companies.insert(pair<string, string> ("Xarvis", "XXX"));
    // or
    companies.insert(map<string,string>::value_type("Quora", "QQQQQQ"));
    // or even
    companies.insert(make_pair(string("Uber"), string("UUUUUU")));

    // Iterating the map
    map<string, string>::iterator itz;
    cout << "\n Map Contents" << endl;
    for (itz=companies.begin(); itz!=companies.end(); itz++){
        cout << "Key: " << (*itz).first << "\t Value: " << itz->second <<endl;
    }

    itz = companies.find("Google");
    cout << itz->second;


    // Check if value in the map
    if (companies.count("Google"))        
    {
        cout << "\n Google is in the map" <<endl;
    }


    return 0;
}
