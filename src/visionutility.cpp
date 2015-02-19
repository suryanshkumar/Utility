/***
 * Author: Suryansh Kumar
 * **/

#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include "visionutility.h"
#include <opencv/cv.h>
#include <opencv2/highgui/highgui.hpp>
#include <dirent.h>
#include <fnmatch.h>


using namespace cv;
using namespace std;

void visionlib :: init_variable(string fop, string fin, string fr){
  
  folder_path = fop;
  
  file_name = fin;
  
  format = fr;
}

void visionlib :: init_variable(string fop, string fr){
  folder_path = fop;
  
  FRAME_RATE = 10;
  
  format = fr;
  
  cout<<"Here"<<endl;
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
    
    string save = folder_path + "/images/" + ss.str() + format;
    
    cout<<save<<endl;
    
    imwrite(save, temp);
    
    imgNum++;
    
  }
}


///This part of the code is contributed by Laxit Gavshinde (laxit1987@gmail.com)
const char *regex;
 
int isImage(struct dirent const *entry)
{
  return !fnmatch(regex, entry->d_name, 0);
}

void visionlib :: images2video()
{
  struct dirent **namelist;
 
  int num=0, count=0;
 
  VideoWriter vw;
 
  Mat img;
 
  char fn[200];
 
  namedWindow("Portal", CV_WINDOW_AUTOSIZE);
 
  regex = format.c_str();
  
  cout<<"Folder = "<<folder_path<<endl;
  cout<<"Regular Exp = "<<regex<<endl;
  
  num = scandir(folder_path.c_str(), &namelist, isImage, versionsort);
 
  if(!strcmp(regex,"*"))//that is regex is not "*"
  {
    count=2;
  }
 
  sprintf(fn, "%s/%s", folder_path.c_str(), namelist[0]->d_name);
  img = imread(fn);
  
  sprintf(fn, "%s/%s.avi", folder_path.c_str(), "video");
  
  //vw.open(fn, CV_FOURCC('P', 'I', 'M', '1'), FRAME_RATE, Size(img.cols, img.rows));
  vw.open(fn, CV_FOURCC('D', 'I', 'V', 'X'), FRAME_RATE, Size(img.cols, img.rows));
 
  while(count<num)
  {
    sprintf(fn, "%s/%s", folder_path.c_str(), namelist[count++]->d_name);
    img = imread(fn);
    cout<<"file = "<<fn<<endl;
    vw<<img;
    imshow("Portal", img);
    waitKey(10);
  }
}

