#include "opencv2/opencv.hpp"
 
// build g++ $(pkg-config --cflags --libs opencv) file.cpp
// g++ $(pkg-config --cflags --libs /usr/local/Cellar/opencv/4.1.0_1/lib/pkgconfig/opencv4.pc) -std=c++11 1.checkForOpenCV.cpp

using namespace cv;
using namespace std;
 
int main( int argc, char** argv )
{
  cout << "OpenCV version : " << CV_VERSION << endl;
  cout << "Major version : " << CV_MAJOR_VERSION << endl;
  cout << "Minor version : " << CV_MINOR_VERSION << endl;
  cout << "Subminor version : " << CV_SUBMINOR_VERSION << endl;
 
  if ( CV_MAJOR_VERSION < 3)
  {
      // Old OpenCV 2 code goes here. 
      cout << "Old OpenCV 2 code" << endl;
  } else
  {
      // New OpenCV 3 code goes here. 
        cout << "New OpenCV 3 code" << endl;
  }
}