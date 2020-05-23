#include <iostream>
using namespace std; 
int main(){
	char c; 
	while (true) {
		cout << "Enter a single letter" << "\n";
		cin >> c;
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
			cout << c << " is a vowel" << "\n";
		}
		else {
			cout << c << " is a consonant" << "\n";
		// numbers and signs count as consonants, don't input any numbers. 
		}
	}
}