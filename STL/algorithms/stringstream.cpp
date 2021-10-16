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
    cout << "example string: "<< str << endl;

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


    cout << "------------Extract words from a sentence with custom separator:"<<endl;
    string str1="Enjoy-Coding-With-Art";
    cout << "example string: "<< str1 << endl;

    stringstream ss1(str1);       // declare stringstream for string str
    string word1;      
    vector<string> words1;  
    int wordcount1 = 0;
    while(getline(ss1, word1,'-')) {       // use getline instead of cin to provide custom separator
        words1.push_back(word1);
        wordcount1++;
    }
    cout<<"No of words : "<< wordcount1 <<"\n";
    for(string word1 : words1)
        cout<<word1<<" ";
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
