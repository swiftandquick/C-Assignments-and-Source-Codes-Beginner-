#include <iostream>
using namespace std;

int main() {
	float c; 
	float f;
	cin >> c;
	cout << "Enter the degree in Celsius: " << "\n";
	f = c * 9 / 5 + 32;
	cout << "The degree in Fahrenheit is: " << f << "\n";
	return 0;
}