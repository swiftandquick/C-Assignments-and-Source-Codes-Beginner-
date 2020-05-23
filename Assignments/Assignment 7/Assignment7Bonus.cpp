#include <iostream>
#include <cmath>
using namespace std;

//The ampersand "&" inside a parameter makes a call by reference. 

void store(int& side1, int& side2, int& side3);
void functions(int A, int B, int C, double& PERIMETER, double& AREA);
bool tf (double AREA2); //tf = true or false, whether the triangle is real or not. 
bool loop();

int main() {
	do {
		int a;
		int b;
		int c;
		double perimeter;
		double area;

		store(a, b, c);

		cout << "The length of of side A is: " << a << " cm. \n";
		cout << "The length of of side B is: " << b << " cm. \n";
		cout << "The length of of side C is: " << c << " cm. \n";

		functions(a, b, c, perimeter, area);

		//Keep in mind that only some side length values cannot make up a triangle.  For example, having the side values of 1, 5, and 9 cannot make a triangle. 
		//However, having the side values of 3, 3, and 5 can. 

		bool check = tf(area);

		if (check == true) {
			cout << "The perimeter is: " << perimeter << " cm.  \n";
			cout << "The area is: " << area << " cm^2.  \n";
		}
		else {
			cout << "Such triangle does not exist." << "\n";
		}
	} while (loop());
}

void store(int& side1, int& side2, int& side3) {
	cout << "Input the length of the first side (integer only): \n";
	cin >> side1;
	cout << "Input the length of the second side (integer only): \n";
	cin >> side2;
	cout << "Input the length of the third side (integer only): \n";
	cin >> side3;
	//Enter the length of the sides in store() function, it will return the values back to the main function. 
}

void functions(int A, int B, int C, double& PERIMETER, double& AREA) {
	double semi; //semi = semiperimeter
	PERIMETER = A + B + C;
	semi = PERIMETER / 2;
	AREA = sqrt(semi * (semi - A) * (semi - B) * (semi - C));
}

bool tf(double AREA2){
	if (AREA2 > 0) {
		return true;
	}
	else {
		return false;
	}
}

bool loop(){
	bool keep_going;
	char y_n;
	cout << "Do you want to continue?  Enter 'n' if you want to terminate, or 'y' if you want to continue." << "\n";
	cin >> y_n;
	if (y_n == 'y') {
		cout << "Enter another function:  " << "\n";
		keep_going = true;
	}
	else if (y_n == 'n') {
		cout << "Program terminating!" << "\n";
		keep_going = false;
	}
	else {
		cout << "Answer does not compute, program terminating!" << "\n";
		keep_going = false;
	}
	return keep_going;
}