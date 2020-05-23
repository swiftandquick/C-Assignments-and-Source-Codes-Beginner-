#include <iostream>
using namespace std;
int main(){
	int star;
	int space;
	int row; 
	int number;
	int counter;
	cout << "Enter the number of stars in the bottom row (between 10 - 20): ";
	cin >> number;
	if (number % 2 == 0) {
		row = number / 2;
		counter = 2;
		for (row = number / 2; row > 0; row--) {
			for (space = row - 1; space > 0; space--) {
				cout << " ";
			}
			for (star = counter; star > 0; star = star - 1) {
				cout << "*";
			}
			for (space = row - 1; space > 0; space--) {
				cout << " ";
			}
			cout << "\n";
			counter = counter + 2;
		}
	}

	else {
		row = (number + 1) / 2;
		counter = 1;
		for (row = (number + 1) / 2; row > 0; row--) {
			for (space = row - 1; space > 0; space--) {
				cout << " ";
			}
			for (star = counter; star > 0; star = star - 1) {
				cout << "*";
			}
			for (space = row - 1; space > 0; space--) {
				cout << " ";
			}
			cout << "\n";
			counter = counter + 2;
		}
	}

}