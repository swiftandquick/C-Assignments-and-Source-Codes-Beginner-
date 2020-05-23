#include <iostream>
using namespace std;
int main(){
	int i = 0;
	int n;
	double sum = 0;
	double average;
	int amount;
	cout << "How many numbers do you want to insert?" << " ";
	cin >> amount;
	while (i < amount) {
		cout << "Enter a number" << "\n";
		cin >> n;
		sum = sum + n;
		i++;
	}
	average = sum / amount;
	cout << "The average of the entered numbers is: " << average << "\n";
	return 0;
}