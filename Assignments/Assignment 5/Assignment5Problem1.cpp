#include <iostream>
using namespace std;

int main(){
	int horizontal; 
	int vertical; 
	int product;
	cout << "12 x 12 Multiplication Table:  " << "\n";
	cout << "\t1    2    3    4    5    6    7    8    9    10   11   12" << "\n";
	cout << "___________________________________________________________________" << "\n";
	for (vertical = 1; vertical <= 12; vertical++) {
		if (vertical < 10) {
			cout << vertical << " |" << "\t";
		}
		else {
			cout << vertical << "|" << "\t";
		}
		for (horizontal = 1; horizontal <= 12; horizontal++) {
			product = horizontal * vertical;
			if (product < 10) {
				cout << product << "    ";
			}
			else if (product >= 10 && product < 100) {
				cout << product << "   ";
			}
			else {
				cout << product << "  ";
			}
		}
		cout << "\n";
	}
}