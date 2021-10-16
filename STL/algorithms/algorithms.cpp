/*
g++ algorithms.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,1,2,3,1,1,1};
    int a = 5, b = 6, c = 10, d = 1;

    // abs() - returns absolute value of a variable
    cout<<"abs : "<<abs(3)<<" "<<abs(-3)<<endl;
    // swap content of a and b
    swap(a, b);
    // 2 raised to the power 4 
    cout<<pow(2,4)<<endl;
    // max() get maximum of two elements
    cout<<"max : "<<max(2,3)<<endl;
    // min() get minimum of two elements
    cout<<"min : "<<min(2,3)<<endl;
    // minimum of a, b, c, d 
    cout<<"min of a, b, c, d "<<min({a,b,c,d})<<endl;
    
    // //Calculates gcd of two numbers a,b
    // cout<<"gcd of b and c"<<__gcd(b,c)<<endl;

    //Calculates number of 1's in binary representation of a
    cout<<"1's in binary representation of a "<<__builtin_popcount(a)<<endl;
    //Note - use __builtin_popcountll when x is long long
    // max_element( first_address, last_address ) - get the iterator to maximum element in a range
    cout<<"max_element : "<<*max_element(arr, arr+12)<<endl;
    // min_element( first_address, last_address ) - get the iterator to minimum element in a range
    cout<<"min_element : "<<*min_element(arr, arr+12)<<endl;
    // update part of memory to something
    memset(arr, 0, sizeof(arr));

    return 0;
}
