#include <iostream>
using namespace std; 

void evalRectangle(double w, double h, double& area, double& per);

int main() {
	double width; //w
	double height; //h
	double r_area; //area
	double r_perimeter; //per
	cout << "Enter the width of the rectangle: \n";
	cin >> width;
	cout << "The width is: " << width << " cm. \n";
	cout << "Enter the height of the rectangle: \n";
	cin >> height;
	cout << "The height is: " << height << " cm. \n";
	evalRectangle(width, height, r_area, r_perimeter);
	cout << "The area of the rectangle is " << r_area << " cm^2. \n";
	cout << "The perimeter of the rectangle is " << r_perimeter << " cm. \n";
}


void evalRectangle(double w, double h, double& area, double& per) {
	area = w * h;
	per = 2 * (w + h);
}