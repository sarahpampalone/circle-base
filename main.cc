#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.1415926535
using namespace std;

double distance(double x1, double y1, double x2, double y2){
	return sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
}

double radius(double x1, double y1, double x2, double y2){
	return (distance(x1, y1, x2, y2));
}

double circumference(double rad){
	return (2*PI*rad);
}

double area(double rad){
	return (PI*rad*rad);
}

int main()
{
	int x1, y1, x2, y2, switchinput;
	cout << "Please enter your first coordinates (center of circle) line by line : \n";
		cin >> x1;
		cin >> y1;
	std::cout << "Please enter your second coordinates line by line : \n";
		cin >> x2;
		cin >> y2;
	
	double dist = distance(x1, y1, x2, y2);
	double rad = radius(x1, y1, x2, y2);
	double circ = circumference(rad);
	double ar = area(rad);

do{
	cout << "Pick a function : \n";
	cout << "1. Calculate the distance \n";
	cout << "2. Calculate the circumference \n";
	cout << "3. Calculate the area \n";
	cout << "4. Exit the program \n";
	cin >> switchinput; //switch option

	switch(switchinput){
		case 1 :
			cout << "Distance = " << dist << endl;
			break;
		case 2 : 
			cout << "Circumference = " << circ << endl;
			break;
		case 3 :
			cout << "Area = " << ar << endl;
			break;
		case 4 :
			cout <<"Thank you for using the program!";
			return 0;
			break;
		default :
			cout << "Invalid input." << endl;
			break;
		
	}
}
while(switchinput!=4);
}
