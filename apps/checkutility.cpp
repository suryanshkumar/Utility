#include <opencv/cv.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include "../src/visionutility.h"



using namespace std;
using namespace cv;




int main(int argc, char *argv[]){
//double an = -4.59989;
//double ap = 4.32; 
//int s = 2;
//cout<<"Absolute Value of an = "<<util::abs_value(an)<<endl;
//cout<<"Round value of ap = "<<round_value(ap)<<endl; 
//cout<<"Round value of an = "<<round_value(an)<<endl; 
//cout<<"Square Value = "<<square_value(an)<<endl; 
//cout<<"Smaller of two = "<<smaller_value(an, 2)<<endl;

//dist_mat dm;
//dm.x1 = 5.0; dm.y1 = 5.0;
//dm.x2 = 7.0; dm.y2 = 7.0;
//cout<<"Distance bw two points = "<<distance_value(dm)<<endl;
//cout<<"Slope bw two points = "<<slope_value(dm)<<endl;

/*Check for video to image module */
 visionlib vl;
 vl.init_variable(argv[1], argv[2]);
 vl.video2images(); 


return 0;
}