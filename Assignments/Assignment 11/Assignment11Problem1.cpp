#include <fstream>
#include <iostream>
#include <string>

using namespace std;

const int MAX_LINES = 80;
char line[MAX_LINES];

bool is_vowel(char c);

int main() {
	ifstream infile;
	ofstream outfile;
	string cat;
	double food;
	infile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project28/cats.txt");
	outfile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project28/output.txt");
	if (infile.fail()) {
		cout << "The file fails to open. \n";
	}
	else{
		while (infile.getline(line, MAX_LINES)){
				int letter_count = 0; //# of characters
				int vowel_count = 0; //# of vowels
				while (line[letter_count] != '\0') {
					if (is_vowel(line[letter_count])) {
						vowel_count++;
					}
					letter_count++;
				}
				cout << line << "\nThe number of vowels is " << vowel_count << ". \n";
			}
	}
	infile.close();
	outfile.close();
}

bool is_vowel(char c) {
	if ((c == 'a') || (c == 'A') || (c == 'e') || (c == 'E') || (c == 'i') || (c == 'I') || (c == 'o') || (c == 'O') || (c == 'u') || (c == 'U')) {
		return true;
	}
	else {
		return false;
	}
}