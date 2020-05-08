#include <iostream>
#include <opencv2/opencv.hpp>
 

/*
1.install opencv4 with brew `brew install opencv@4`
2.create link  in pkgconfig with command `ln -s /path/to/original /path/to/symlink`
ln -s /usr/local/Cellar/opencv/4.1.0_1/lib/pkgconfig/opencv4.pc /usr/local/lib/pkgconfig/opencv.pc
*/ 

// g++ $(pkg-config --cflags --libs opencv) -std=c++11 1.checkForOpenCV.cpp
// g++ $(pkg-config --cflags --libs /usr/local/Cellar/opencv/4.3.0/lib/pkgconfig/opencv4.pc) -std=c++11 1.checkForOpenCV.cpp

using namespace cv;
using namespace std;
 
int main( int argc, char** argv )
{
  cout << "OpenCV version : " << CV_VERSION << endl;
  cout << "Major version : " << CV_MAJOR_VERSION << endl;
  cout << "Minor version : " << CV_MINOR_VERSION << endl;
  cout << "Subminor version : " << CV_SUBMINOR_VERSION << endl;
 
  if ( CV_MAJOR_VERSION < 4)
  {
      // Old OpenCV 2 code goes here. 
      cout << "Old OpenCV 2 code" << endl;
  } else
  {
      // New OpenCV 4 code goes here. 
        cout << "New OpenCV 4 code" << endl;
  }
}