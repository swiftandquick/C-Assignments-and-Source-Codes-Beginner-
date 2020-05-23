#include <iostream>
using namespace std;

int main() {
	int month; 
	float balance; 
	float balance2; //balance after adding interest rate
	float payment; 
	float APR; //annual percentage rate
	cout << "Enter the balance:  " << "\n"; 
	cin >> balance; 
	cout << "Enter the annual percentage rate:  " << "\n";
	cin >> APR; 
	for (month = 1; balance >= 0.01; month++) {
		payment = (balance * APR) + (balance * 0.01);
		cout << "The payment is:  $" << payment << " in month " << month << "." << "\n";
		balance = (balance - payment);
		cout << "The balance is:  $" << balance << "." << "\n";
	}
	cout << "The balance will be $0 after " << month - 1 << " months." << "\n"; 
}