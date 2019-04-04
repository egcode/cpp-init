
/*
 g++ main.cpp -o hello
 */

#include <iostream>
#include <string>


int main()
{
    //Get line
    std::string userName;
    std::cout<<"Tell me your full name (with spaces)?: ";
    std::getline(std::cin, userName);
    std::cout<<"Hello "<<userName<<"\n";
    
    //Get one input
    int year = 0;
    std::cout<<"What year is your favorite? ";
    //get the user response and assign it to the variable year
    std::cin >> year;
    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";

    std::string someString = " ";
    std::cout<<"Type some string: ";
    std::cin >> someString;
    std::cout<<"You typed string: "<<someString<<"!\n";

    return 0;
}
