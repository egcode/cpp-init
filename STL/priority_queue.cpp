/*
g++ priority_queue.cpp -std=c++11;./a.out
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

    //  max heap
    // priority_queue <int> pq;

    // min heap
    priority_queue <int, vector<int>, greater<int> > pq;

    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // Extracting items from the heap
    while (!pq.empty())
    {
        cout << pq.top() << " "<< endl;
        pq.pop();
    }
    cout << "\n\n";

    // creating heap from user defined objects
    // Let's initialize the properties of `Person` object first
    p1.name = "p1name";
    p1.age = 47;

    p2.name = "p2name";
    p2.age = 46;

    p3.name = "p3name";
    p3.age = 19;

    // Initialize a min heap
    
    // Note: We defined a comparator is_older in the beginning to
    // compare the ages of two people.
    
    priority_queue <struct Person, vector<struct Person>, is_older> mh;
    mh.push(p1);
    mh.push(p2);
    mh.push(p3);

    // Extracting items from the heap
    while (!mh.empty())
    {
    	struct Person p = mh.top();
        cout << p.name << " " << "  age: "<< p.age << endl;
        mh.pop();
    }    
    
    return 0;
}
