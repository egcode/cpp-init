#include<iostream>
using namespace std;

class Dog {
    private:
        int license;
    public:
        Dog(); //declaring the constructor
        Dog(int licenseIn);
        void setLicense(int licenseIn);
        int getLicense();
        ~Dog(); // declaring destructor
};

//defining the constructor
Dog::Dog() {
   cout<<"Creating Dog\n";
   license = 0;
}

//defining the destructor
Dog::~Dog() {
    cout<<"\nDeleting the dog";
}
Dog::Dog(int licenseIn) {
   license = licenseIn; 
}
void Dog::setLicense(int licenseIn) {
    license = licenseIn;
}
int Dog::getLicense() {
    return license;
}



int main() {
    Dog dog;
    dog.setLicense(998);
    cout<<dog.getLicense();
    return 0;
}