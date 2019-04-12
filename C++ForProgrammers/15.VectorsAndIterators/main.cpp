#include <iostream>
#include <vector>


int main () {
  //creating a vector of integers
  std::vector<int> vectorInts;  
  //creating an iterator for the vector
  std::vector<int>::iterator it;
  
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  std::cout<<"\n\nAdding four elements to the vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.assign(4,3);
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";
  

  std::cout<<"\n\nAdding four elements to the vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.push_back(24);
  vectorInts.push_back(25);
  vectorInts.push_back(26);
  vectorInts.push_back(27);
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";
 
   // erase the 6th element
   std::cout<<"\nAfter erase 3rd element, the vector has these elements:\n";
   vectorInts.erase (vectorInts.begin()+2);
   for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

   // Erase range from vector
   std::cout<<"\nAfter range erase, the vector has these elements:\n";
   vectorInts.erase(vectorInts.begin()+1, vectorInts.begin()+3);
   for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";


   //clear the vector
  vectorInts.clear();
  std::cout<<"\nAfter clear, the vector has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";


  return 0;
}
