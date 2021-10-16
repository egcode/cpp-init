/*
g++ stringstream.cpp -std=c++11;./a.out

clear()         : to clear the stream
str()           : to get and set string object whose content is present in stream.
operator <<     : add a string to the stringstream object.
operator >>     : read content from the stringstream object, 

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << "------------Sentence into Vector:"<<endl;
    string str= "Welcome to coding with art";
    stringstream ss(str);       // declare stringstream for string str
    string word;      
    vector<string> words;  
    int wordcount = 0;
    while(ss >> word){
        words.push_back(word);
        wordcount++;
    }
    cout<<"No of words : "<< wordcount <<"\n";
    for(string word : words)
        cout<<word<<"  ";
    cout<<"\n";

    cout << "------------String to number convertion:"<<endl;
    string numString = "2456"; 
    // object from the class stringstream 
    stringstream sss(numString); 
    int number = 0; 
    sss >> number; 
    // Now the variable number holds the value 2456 
    cout << "Value of number : " << number; 
    cout<<"\n";


    return 0;
}
