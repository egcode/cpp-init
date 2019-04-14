#include <iostream>
#include <vector>

template <typename T>
void printVector(std::vector<T> vIn);


template <typename T>
void printVector(std::vector<T> vIn) {
  std::cout<<"\nPrinting Vector:"<<"\n";
  typename std::vector<T>::iterator it;
  for (it = vIn.begin(); it != vIn.end(); ++it)
    std::cout<<*it<<" ";
}