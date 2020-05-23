#include <iostream>
using namespace std;

int main(){
	int number;
	cout << "Enter a number between 0 and 100:" << "\n";
	cin >> number;
	int ten_digit; 
	int remainder;


	char y_n;
	bool keep_going = true;
	while (keep_going) {


		if (number < 100 && number > 0) {
			switch (number) {
			case 1:
				cout << "one" << "\n";
				break;
			case 2:
				cout << "two" << "\n";
				break;
			case 3:
				cout << "three" << "\n";
				break;
			case 4:
				cout << "four" << "\n";
				break;
			case 5:
				cout << "five" << "\n";
				break;
			case 6:
				cout << "six" << "\n";
				break;
			case 7:
				cout << "seven" << "\n";
				break;
			case 8:
				cout << "eight" << "\n";
				break;
			case 9:
				cout << "nine" << "\n";
				break;
			case 10:
				cout << "ten" << "\n";
				break;
			case 11:
				cout << "eleven" << "\n";
				break;
			case 12:
				cout << "twelve" << "\n";
				break;
			case 13:
				cout << "thirteen" << "\n";
				break;
			case 14:
				cout << "fourteen" << "\n";
				break;
			case 15:
				cout << "fifteen" << "\n";
				break;
			case 16:
				cout << "sixteen" << "\n";
				break;
			case 17:
				cout << "seventeen" << "\n";
				break;
			case 18:
				cout << "eighteen" << "\n";
				break;
			case 19:
				cout << "nineteen" << "\n";
				break;
			default:
			{
				ten_digit = number / 10;
				remainder = number % 10;
				switch (ten_digit) {
				case 2:
					cout << "twenty";
					break;
				case 3:
					cout << "thirty";
					break;
				case 4:
					cout << "forty";
					break;
				case 5:
					cout << "fifty";
					break;
				case 6:
					cout << "sixty";
					break;
				case 7:
					cout << "seventy";
					break;
				case 8:
					cout << "eighty";
					break;
				case 9:
					cout << "ninety";
					break;
				default:
					break;
				}
				switch (remainder) {
				case 0:
					cout << "\n";
					break;
				case 1:
					cout << "-one" << "\n";
					break;
				case 2:
					cout << "-two" << "\n";
					break;
				case 3:
					cout << "-three" << "\n";
					break;
				case 4:
					cout << "-four" << "\n";
					break;
				case 5:
					cout << "-five" << "\n";
					break;
				case 6:
					cout << "-six" << "\n";
					break;
				case 7:
					cout << "-seven" << "\n";
					break;
				case 8:
					cout << "-eight" << "\n";
					break;
				case 9:
					cout << "-nine" << "\n";
					break;
				default:
					break;
				}
			}
			}
		}
		else {
			cout << "The number is not in range." << "\n";
		}
		cout << "Do you want to continue?  Enter 'n' if you want to terminate, or 'y' if you want to continue." << "\n";
		cin >> y_n;
		if (y_n == 'n') {
			cout << "Loop terminated!" << "\n";
			keep_going = false;
		}
		else if (y_n == 'y') {
			cout << "Enter a number between 0 and 100:" << "\n";
			cin >> number;
		}
		else {
			cout << "The answer does not compute!" << "\n";
			break;
		}
	}
}