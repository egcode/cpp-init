/*
g++ queue.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;

    // push an element at the end of queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // get the size of queue
    cout<<"the size is "<<q.size()<<endl;

    // iterate till queue is not empty
    while (!q.empty()){
        // get the front element of queue
        cout<<q.front()<<" ";
        // remove the front element of queue
        q.pop();
    }

    return 0;
}
