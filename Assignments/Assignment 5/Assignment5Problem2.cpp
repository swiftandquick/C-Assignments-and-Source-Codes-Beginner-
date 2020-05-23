#include <iostream>;
using namespace std; 

int main(){
	int resistor; //number of resistors
	int number; //the starting number = 1
	float resistance;
	float inverse;
	float sum = 0; //starting resistance = 0
	float total_resistance; 
	cout << "How many resistors are there:  " << "\n";
	cin >> resistor;
	for (number = 1; number <= resistor; number++) {
		cout << "Enter the the resistance in the resistor # " << number << " :" << "\n";
		cin >> resistance; 
		inverse = 1 / resistance;
		sum = sum + inverse; 
	}
	total_resistance = 1 / sum;
	cout << "\n" << "The total resistance is: " << total_resistance << " ohms. " << "\n";
}