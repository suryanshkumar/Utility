/***
 * Author: Suryansh Kumar
 * 
 * **/

#include <opencv/cv.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include "../src/visionutility.h"


using namespace std;
using namespace cv;


constexpr unsigned int str2int(const char* str, int h = 0)
{
    return !str[h] ? 5381 : (str2int(str, h+1)*33) ^ str[h];
}

int main(int argc, char *argv[])
{
    
/***Check for video to image module***/
///argv[1] = <video_folder_path> 
///argv[2] = <name_of_the_video>
///argv[3] = ".jpg" <format_in_which_you_want_to_store>

 visionlib vl;
 string option = argv[1];

 switch (str2int(option.c_str()))
 {
     
     case str2int("images2video"):
          
          cout<<"Images to video"<<endl;
          
          vl.init_variable(argv[2], argv[3]);
          
          vl.images2video();
          
          break;
     
     case str2int("video2images"):
          
          cout<<"Video to images"<<endl;
          
          vl.init_variable(argv[2], argv[3], argv[4]);
          
          vl.video2images();
          
          break;
  }
  
///Check for images to video module  
///argv[1] = <image_folder_path> 
///argv[2] = *.jpg or <format of image file in folder>

 return 0;
}
