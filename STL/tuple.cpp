/*
g++ tuple.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

#define watch(x) cout << (#x) << " is " << (x) << endl

int main(){


    tuple<int,int,int> t1 = make_tuple(1,2,3);
    tuple<char,int,double,int,long long int> t2 = make_tuple('a', 2, 2.3, 1, 10000);
    // get 3rd element in tuple t1 and 1st element in tuple t2
    cout<<get<2>(t1)<< " "<<get<0>(t2)<<endl;

    int a, b, d=10, e=5, f=15;
    char c;
    tie (a, b, c) = make_tuple(4,1,'a'); // this is equilvalent to a=4; b=1 ; c='a'
    tie (a ,b) = make_tuple(b,a);  // swapping b and a
    tie (d,e,f) = make_tuple(d+e+f, d+2*e , 10*d); // d = d+e+f, e = d+2*e, f = 10*d
    // used macro to see values
    watch(d), watch(e), watch(f);

    return 0;
}
