#include <iostream>
using namespace std;
int main(){
	int n = 1;
	while (n <= 100) {

		if (n % 3 == 0 && n % 5 != 0) {
			cout << "Fizz" << "\n";
		}
		else {
			if (n % 5 == 0 && n % 3 != 0) {
				cout << "Buzz" << "\n";
			}
			else {
				if (n % 5 == 0 && n % 3 == 0) {
					cout << "FizzBuzz" << "\n";
				}
				else {
					cout << n << "\n";
				}
			}
		}
		n++;
	}
	return 0;
}