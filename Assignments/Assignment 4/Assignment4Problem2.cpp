#include <iostream>;
using namespace std;

int main(){
	int operation_choice;
	int answer;
	int first_number;
	int second_number;

	char y_n;
	
	bool keep_going=true;
	
	while (keep_going) {

	cout << "Insert the operation you wanted: " << "\n" << "1. Addition" << "\n" << "2. Subtraction" << "\n" << "3. Multiplication" << "\n" << "4. Division" << "\n";
	cin >> operation_choice;
	cout << "\n" << "Insert the first number:" << "\n";
	cin >> first_number;
	cout << "\n" << "Insert the second number:" << "\n";
	cin >> second_number;

	switch (operation_choice) {
	case 1:
		answer = first_number + second_number;
		cout << first_number << "+" << second_number << "=" << answer << "\n";
		break;
	case 2:
		answer = first_number - second_number;
		cout << first_number << "-" << second_number << "=" << answer << "\n";
		break;
	case 3:
		answer = first_number * second_number;
		cout << first_number << "*" << second_number << "=" << answer << "\n";
		break;
	case 4:
		answer = first_number / second_number;
		cout << first_number << "/" << second_number << "=" << answer << "\n";
		break;
	default:
		cout << "ERROR!  Operation not found!" << "\n";
	}


	cout << "Do you want to continue?  Enter 'n' if you want to terminate, or 'y' if you want to continue." << "\n";
	cin >> y_n;
	if (y_n == 'n') {
		keep_going = false;
	}

	}
}