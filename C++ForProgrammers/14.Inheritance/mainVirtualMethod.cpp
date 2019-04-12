// MORE INFO
// https://stackoverflow.com/questions/2391679/why-do-we-need-virtual-functions-in-c

#include<iostream>
#include<string>

class Animal {
    public:
        // void eat() { std::cout << "\nI'm eating generic food."; }
        virtual void eat() { std::cout << "\nI'm eating generic food."; }

};

class Cat : public Animal {
    public:
        void eat() { std::cout << "\nI'm eating a rat."; }
};


void someFunction(Animal *xyz) { xyz->eat(); }


int main() {
    Animal *animal = new Animal;
    Cat *cat = new Cat;

    animal->eat(); // Outputs: "I'm eating generic food."
    cat->eat();    // Outputs: "I'm eating a rat."
    std::cout << "\n=======================";

    // Without Virtual word
    someFunction(animal); // Outputs: "I'm eating generic food."
    someFunction(cat);    // Outputs: "I'm eating generic food."

    // With Virtual word
    someFunction(animal); // Outputs: "I'm eating generic food."
    someFunction(cat);    // Outputs: "I'm eating a rat."

    return 0;
}