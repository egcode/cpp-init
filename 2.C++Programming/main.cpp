#include <iostream>
#include <vector>

template <typename T>
void printVector(std::vector<T> vIn);


class Eugene {
    public:
     int matiya;
     float eg;
    Eugene() {
        matiya = 42;
        eg = 3.2;
    }

    friend std::ostream& operator<<(std::ostream& os, const Eugene& dt);
    
};

std::ostream& operator<<(std::ostream& os, const Eugene& dt) {
    os << dt.matiya << '|' << dt.eg << '|' << dt.matiya;
    return os;
}




int main () {
    std::vector<int> intvariable(5);
    for(int i;i<5;i++) {
        intvariable[i] = i+1;
        std::cout<<"assigning vector member"<<i<<"\n";
    }
    printVector(intvariable);

    std::vector<int> myvector1 (10, 6);
    printVector(myvector1);

    // C++11 
    std::vector<float> myvector2 = {5.0, 3.0, 2.7, 8.2, 7.9};
    printVector(myvector2);

    std::vector<Eugene> shit(5);
    printVector(shit);

    return 0;
}


template <typename T>
void printVector(std::vector<T> vIn) {
  std::cout<<"\nPrinting Vector:"<<"\n";
  typename std::vector<T>::iterator it;
  for (it = vIn.begin(); it != vIn.end(); ++it)
    std::cout<<*it<<" ";
}