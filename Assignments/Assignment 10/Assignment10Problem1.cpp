#include <fstream>
#include <iostream>
#include <string>

using namespace std;
const int MAX_CATS = 6000;

void bubblesort(std::string arr[], int length); //sort by alphabetical order
void bubblesort2(double arr[], int length); //sort by number (least to greatest)

int main() {
	ifstream infile;
	ofstream outfile;
	string cats[MAX_CATS];
	double food[MAX_CATS];
	int line_count = 0;
	infile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project22/cats.txt");
	outfile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project22/cats_sorted.txt");
	outfile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project22/food_sorted.txt");
	if (infile.fail()) {
		cout << "The file fails to open. \n";
	}
	else{
		while (infile >> cats[line_count] >> food[line_count]) {
			line_count++;
		}
	}

	bubblesort(cats, line_count);
	cout << "Sorted by cat's name (Alphabetical Order): \n\n";
	for (int i = 0; i<line_count; i++){
		cout << cats[i] << " \n";
	}
	cout << "\n\n\n\n";
	cout << "Sorted by the amount of food eaten: \n\n";
	bubblesort2(food, line_count);
	for (int i = 0; i<line_count; i++){
		cout << food[i] << " \n";
	}
	cout << "\n\n\n\n";
	return 0;

	infile.close();
	outfile.close();
}

//string arr[] = string cats[MAX_CATS]
//double arr[] = string food[MAX_CATS]

void bubblesort(std::string arr[], int length){
	for (int i = length - 1; i>0; i--){
		for (int j = 0; j<i; j++){
			if (arr[j] > arr[j + 1]){
				std::string temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void bubblesort2(double arr[], int length){
	for (int i = length - 1; i>0; i--){
		for (int j = 0; j<i; j++){
			if (arr[j] > arr[j + 1]){
				double temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}