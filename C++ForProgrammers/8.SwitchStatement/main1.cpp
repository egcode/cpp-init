/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers, 
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution. 
*/

#include <iostream>

int main()
{
    float in1, in2, result;
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    
    char op;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>>op;
    
    switch(op) {
        case '+': 
            result = in1 + in2;
            break;
        case '-': 
            result = in1 - in2;
            break; 
        case '*': 
            result = in1 * in2;
            break;
        case '/': 
            result = in1 / in2;
            break;
        default: std::cout<<"Enter a valid operation";
    }

    std::cout<<in1<<" "<<op<<" "<<in2<<" = "<<result;
    std::cout<<"\n";
    return 0;
}