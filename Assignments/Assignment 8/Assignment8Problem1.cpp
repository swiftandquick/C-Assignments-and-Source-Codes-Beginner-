#include <iostream>
using namespace std;

const double pi = 3.14;
void evalCircle(double rad, double& area, double& circ); 
//rad = radius, circ = circumference

int main() {
	double radius; 
	double c_area;
	double c_circ;
	cout << "Enter the radius of the circle: \n";
	cin >> radius;
	cout << "The radius of the circle is " << radius << " cm. \n";
	evalCircle(radius, c_area, c_circ);
	cout << "The area of the circle is " << c_area << " cm^2. \n";
	cout << "The circumference of the circle is " << c_circ << " cm. \n";
}

void evalCircle(double rad, double& area, double& circ) {
	area = pi * rad * rad; 
	circ = pi * rad * 2;
}