/***
 * Author: Suryansh Kumar
 * **/

#ifndef VISIONUTILITY_H
#define VISIONUTILITY_H 

#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include <opencv/cv.h>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

class visionlib{
  
  public:
  
  void init_variable(string, string, string);
  
  void init_variable(string, string);
  
  void video2images();
  
  void images2video();
  
  private:
  
  string folder_path;
  
  string file_name;
  
  string format; 
  
  int FRAME_RATE;
  
  
  
};


#endif


