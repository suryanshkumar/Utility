/* Here are some of the utility template 
   of C++ that are used quite often in programs 
   * 
   **/
/*
 * Author: Suryansh Kumar
 * **/

#include <cmath>


#ifndef UTILITY_H
#define UTILITY_H 

namespace util{
  
  #define PI 3.141592653589
  /* calculate absolute value*/
  template <class T>
  inline T abs_value(T a){ return ( a>0 ? a:-a); }
  
  /* round the value to nearest integer is based on symmetric round(i.e away from zero)*/
  template <class T>
  inline int round_value(T a){ return ( a > 0 ? (int)(a + 0.5):(int)(a - 0.5) ); }
  
  /* square of a number*/
  template <class T>
  inline T square_value(T a) { return (a*a); }
  
  /* smaller of two numbers, kindly take care of return type*/
  template <class T1, class T2>
  inline T1 smaller_value(T1 a, T2 b){ return (a<b?a:b); }
  
  /* euclidean distance between two points (x1, y1) & (x2, y2)*/
  template <class T>
  double distance_value(T a){
   
   double tempx = (a.x1 - a.x2);
   
   double tempy = (a.y1 - a.y2);
   
   double dist  = sqrt(square_value(tempx) + square_value(tempy));
   
   return dist;
  }
  
  /*slope between two points in theta, atan arg (-pi, pi]*/
  template <class T>
  double slope_value (T a){
   
   double theta = atan2( (a.y2-a.y1), (a.x2 - a.x1) );
   
   theta = theta*180.0/PI;
   
   return theta; 
  }
}









#endif
