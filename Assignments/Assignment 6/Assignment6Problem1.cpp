#include <iostream>;
using namespace std;

int operation();
int addition();
int subtraction();
int multiplication();
int division();
bool loop();

int main(){
	do {
		int choice = operation();
		int result; 
		switch (choice){
		case 1:
			result = addition();
			cout << "Answer: " << result << ". \n";
			break;
		case 2:
			result = subtraction();
			cout << "Answer: " << result << ". \n";
			break;
		case 3:
			result = multiplication();
			cout << "Answer: " << result << ". \n";
			break;
		case 4:
			result = division();
			cout << "Answer: " << result << ". \n";
			break;
		case 5: 
			cout << "ERROR! \n";
			break;
		}
	} 
	while (loop());
}

int operation() {
	int choice;
	cout << "What would you like to do: \n"; 
	cout << "1. Addition \n"; 
	cout << "2. Subtraction \n"; 
	cout << "3. Multiplication \n"; 
	cout << "4. Division \n"; 
	cin >> choice;
	return choice;
}

//addition
int addition() {
	int x;
	int y;
	cout << "Input the first integer: \n";
	cin >> x;
	cout << "Input the second integer: \n";
	cin >> y;
	int result = x + y;
	cout << x << " + " << y << " = " << result << "\n";
	return result;
}

//subtraction
int subtraction() {
	int x;
	int y;
	cout << "Input the first integer: \n";
	cin >> x;
	cout << "Input the second integer: \n";
	cin >> y;
	int result = x - y;
	cout << x << " - " << y << " = " << result << "\n";
	return result;
}

//multiplication
int multiplication() {
	int x;
	int y;
	cout << "Input the first integer: \n";
	cin >> x;
	cout << "Input the second integer: \n";
	cin >> y;
	int result = x * y;
	cout << x << " * " << y << " = " << result << "\n";
	return result;
}

//division
int division() {
	int x;
	int y;
	cout << "Input the first integer: \n";
	cin >> x;
	cout << "Input the second integer: \n";
	cin >> y;
	int result = x / y;
	cout << x << " / " << y << " = " << result << "\n";
	cout << "The remainder is: " << x % y << "\n";
	return result;
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