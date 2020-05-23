#include <fstream>
#include <iostream>
#include <string>

using namespace std; 

int main() {
	ifstream infile;
	ofstream outfile; 
	string cat, cat_min, cat_max;
	double food;
	double food_average, food_min = 999, food_max = 0;
	double total_food = 0;
	int number_of_cats = 0;
	infile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project20/cats.txt");
	outfile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project20/food_stats.txt");
	if (infile.fail()) {
		cout << "The file fails to open. \n";
	}
	else{
		while (infile >> cat >> food) {
			number_of_cats++;
			total_food = total_food + food;
			if (food > food_max) {
				cat_max = cat;
				food_max = food;
			}
			if (food < food_min) {
				cat_min = cat;
				food_min = food;
			}
		}
		food_average = total_food / number_of_cats; 
		cout << "Total Food - " << total_food << " cups \n";
		cout << "Number of Cats - " << number_of_cats << " cats \n";
		cout << "Average - " << food_average << " cups / cat \n";
		cout << "Food Maximum - " << cat_max << " : " << food_max << " cups \n";
		cout << "Food Minimum - " << cat_min << " : " << food_min << " cups \n";
	}
	infile.close();
	outfile.close();
}