#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ifstream infile;
	ofstream outfile;
	string cat, cat_shortest, cat_longest;
	double food;
	int character;
	int longest_name = 0;
	int shortest_name = 999;
	int number_of_cats = 0;
	double total_char = 0;
	double average;
	infile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project20/cats.txt");
	outfile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project20/name_stats.txt");
	if (infile.fail()) {
		cout << "The file fails to open. \n";
	}
	else{
		while (infile >> cat >> food) {
			character = 0;
			while (character < cat.length()) {
				character++;
			}
			number_of_cats = number_of_cats + 1;
			total_char = total_char + character;
			if (character > longest_name) {
				cat_longest = cat;
				longest_name = character;
			}
			if (character < shortest_name) {
				cat_shortest = cat;
				shortest_name = character;
			}
		}
		average = total_char / number_of_cats;
		cout << "Total Characters - " << total_char << " characters \n";
		cout << "Number of Cats - " << number_of_cats << " cats \n";
		cout << "Average - " << average << " characters / cat \n";
		cout << "Longest Name - " << cat_longest << " : " << longest_name << " characters \n";
		cout << "Shortest Name - " << cat_shortest << " : " << shortest_name << " characters \n";
	}
	infile.close();
	outfile.close();
}