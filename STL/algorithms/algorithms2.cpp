/*
g++ algorithms2.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

struct Person {
  string name;
  int age;
} p1, p2, p3;

struct is_older {
  bool operator()(struct Person p1, struct Person p2) {
    	return p1.age > p2.age;
    }
};

bool compare_names(struct Person p1, struct Person p2) {
    	return p1.name < p2.name;
}

bool way_to_sort(int i, int j) { return i > j; }




int main(){
    

    // The following list type initialization is only supported in versions after C++11
    vector<int> int_vec = {56, 32, -43, 23, 12, 93, 132, -154};
    
    sort(int_vec.begin(), int_vec.end(), way_to_sort);
    for (vector <int>::iterator i = int_vec.begin(); i!=int_vec.end(); i++)
        cout << *i << " ";
    cout << endl;

    // // Sorting user-defined objects
    // static struct Person persons[] = {p1, p2, p3};
    // sort(persons, persons+3, compare_names);

    // // This will print out the names in alphabetical order
    // for (int i=0; i < 3; i++) {
    // 	cout << "Name: " << persons[i].name << " "<<endl;
    // }


    return 0;
}
