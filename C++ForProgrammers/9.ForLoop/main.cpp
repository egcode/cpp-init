#include <iostream>
#include <cstddef> //don't forget to include the library for size_t

int main() {
    float summ = 0;
    float number;
    float average;
    
    // for (int i=0; i<5;i++) {
    // size_t This is known as an implicit type cast and it can make your code more portable and secure
    for(size_t i=0; i<5; i++) {
        std::cout<<"What is the next number?\n";
        std::cin>>number;
        summ += number;
    }
    std::cout<<"summ: "<<summ<<"\n";
    
    average = summ / 5.0;
    std::cout<<"average: "<<average<<"\n\n";

    return 0;
}
