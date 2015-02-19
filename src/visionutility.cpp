#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include "visionutility.h"
#include <opencv/cv.h>
#include <opencv2/highgui/highgui.hpp>


using namespace cv;
using namespace std;

void visionlib :: init_variable(string fop, string fin){
  
  folder_path = fop;
  
  file_name = fin;
}
  
void visionlib :: video2images(){
  
  file_name = folder_path + "/" + file_name;
  
  VideoCapture cap; cap.open(file_name);
  
  string command = "mkdir " + folder_path + "/images";
  
  system(command.c_str());
  
  int imgNum = 0;
  
  while(true){
  
    Mat temp;
    
    cap>>temp;
    
    if(temp.empty()){
      cout<<"All frames read or Unable to read...."<<endl;
      break;
    }
    
    stringstream ss;
    
    ss<<imgNum;
    
    string save = folder_path + "/images/" + ss.str() + ".jpg";
    
    cout<<save<<endl;
    
    imwrite(save, temp);
    
    imgNum++;
    
  }
}

void visionlib :: images2video(){

  
}

