#include<iostream>

using namespace std;

//Our generic function
template <typename T>  //tell the compiler we are using a template
T findSmaller(T input1,T  input2); 

int main() {
    int a = 54; 
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';
    string s1 = "Hello";
    string s2 = "Bots are fun";
    
    //Wow! We can use one function for different variable types
    cout<<"\n"<<a<<" and "<<b<<" Integers compared, smallest: "<<findSmaller(a,b);
    cout<<"\n"<<f1<<" and "<<f2<<" Floats compared, smallest: "<<findSmaller(f1,f2);
    cout<<"\n"<<c1<<" and "<<c2<<" Chars compared, smallest: "<<findSmaller(c1,c2);
    cout<<"\n"<<s1<<" and "<<s2<<" Strings compared, smallest: "<<findSmaller(s1,s2); 

    return 0;
}

template <typename T>
T findSmaller(T  input1,T  input2) {
    if(input1 < input2)
        return input1;
    else
        return input2;
}