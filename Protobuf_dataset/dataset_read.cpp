#include <iostream>
#include <fstream>
#include <string>
#include "face_dataset.pb.h"
using namespace std;


/*

rm -rf build;mkdir build;cd build;cmake \
-DCMAKE_C_COMPILER=clang \
-DCMAKE_CXX_COMPILER=clang++ \
-DCMAKE_PREFIX_PATH="/usr/local/Cellar/protobuf/3.12.4" ..;make VERBOSE=1;cd ..

./build/dataset_read /Users/yujin/Documents/Developer/CPP/cpp-init/Protobuf_dataset/dataset_targarien.protobuf
./build/dataset_read /Users/yujin/Documents/Developer/CPP/cpp-init/Protobuf_dataset/dataset_golovan.protobuf

*/


// Iterates though all people in the AddressBook and prints info about them.
void ListFaces(const dataset_faces::DatasetObject& dataset_object) {
  for (int i = 0; i < dataset_object.faceobjects_size(); i++) {
    const dataset_faces::FaceObject& faceObject = dataset_object.faceobjects(i);

    cout << "\n  Name: " << faceObject.name() << endl;


    double embedding[512];
    // getting data from protobuf
    for (int j = 0; j < faceObject.embeddings_size(); j++) 
    {
      embedding[j] = faceObject.embeddings(j);
    }


    // printing embedding
    for (int j = 0; j < (sizeof(embedding)/sizeof(*embedding)); j++) 
      cout << embedding[j];

  }
}

// Main function:  Reads the entire face dataset from a file and prints all
//   the information inside.
int main(int argc, char* argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  if (argc != 2) {
    cerr << "Usage:  " << argv[0] << " ADDRESS_BOOK_FILE" << endl;
    return -1;
  }

  dataset_faces::DatasetObject dataset_object;

  {
    // Read the existing address book.
    fstream input(argv[1], ios::in | ios::binary);
    if (!dataset_object.ParseFromIstream(&input)) {
      cerr << "Failed to parse dataset object." << endl;
      return -1;
    }
  }

  ListFaces(dataset_object);

  // Optional:  Delete all global objects allocated by libprotobuf.
  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}