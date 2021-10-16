
/*
g++ bitset.cpp -std=c++11;./a.out
*/

#include <bits/stdc++.h>
using namespace std;

void invertBits(int num){
	// calculating number of bits in the number
	int x = log2(num) + 1;
	bitset<32> b(num);
    cout<<"Before invert: "<<b<<endl;
    
	// reversing the bits one by one
	for(int i = 0; i < x; i++)
		b.flip(i);

    cout<<"After invert: "<<b<<endl;

	// converting bitset to number
	cout<< "Converted to number: "<<b.to_ulong()<<endl;
}


int main(){

    int n = 9;
    bitset<32> b1(n);
    bitset<10> b2(n);
    bitset<32> b3(string("1001"));

    cout<<b1<<endl;
    cout<<b2<<endl;
    cout<<b3<<endl;

    invertBits(n);

    return 0;
}

