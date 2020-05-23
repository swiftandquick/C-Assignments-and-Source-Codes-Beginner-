#include <iostream>
using namespace std;

int main() {
	//Declare two ints for the width and height of the rectangle
	int width, height;
	/* and another int for the area */
	int area;
	cout << "Enter the rectangle width" << endl;
	cin >> width;
	cout << "Enter the rectangle height" << endl;
	cin >> height;
	area = width * height;
	cout << "Area is " << area << "!" << endl;
	return 0;}