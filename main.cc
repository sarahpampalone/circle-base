#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.1415926535

double distance(double x1, double y1, double x2, double y2){
  return sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
}

double radius(double x1, double y1, double x2, double y2){
  return(distance(x1,y1,x2,y2));
}

double circumference(double rad){
  return(2*PI*rad);
}

double area(double rad){
  return(PI*rad*rad);
}

int main()
{
  int x1, y1, x2, y2, value;
  std::cout << "Please enter your first coordinates (center of circle) : \n";
    std::cin >> x1;
    std::cin >> y1;
  std::cout << "Please enter your second coordinates : \n";
    std::cin >> x2;
    std::cin >> y2;
  double dist = distance(x1,y1,x2,y2);
  double rad = radius(x1,y1,x2,y2);
  double circ = circumference(rad);
  double ar = area(rad);
do{
  std::cout << "Pick a function : \n";
  std::cout << "1. Calculate the distance \n";
  std::cout << "2. Calculate the circumference \n";
  std::cout << "3. Calculate the area \n";
  std::cout << "4. Exit the program \n";
    std::cin >> value; //switch option
  
  switch(value){
    case 1:
      std::cout << dist << "\n";
      break;
    case 2 :
      std::cout << circ << "\n";
      break;
    case 3 :
      std::cout << ar << "\n";
      break;
    case 4 : 
      std::cout << "Thank you for using the program!";
      return 0;
      break;
    default :
      std::cout << "Invalid input. \n";
      break;
  }
}
while(value!=4);
}
