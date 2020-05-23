#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

const int MAX_POINTS = 12;

struct Point{
	double x; 
	double y;
};

double distance2d(struct Point p0, struct Point p1);

int main() {

	Point points[MAX_POINTS];
	ifstream infile;
	ofstream outfile;
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	infile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project30/points2d.txt");
	outfile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project30/output.txt");
	if (infile.fail()) {
		cout << "The file fails to open. \n";
	}
	else{
		int i = 0;
		while (infile >> points[i].x >> points[i].y) {
			i++;
		}
		cout << "Enter the coordinates, make sure the value is less than 12! \n";
		cout << "Find the 1st distance, enter the first coordinate:" << endl;
		cin >> a;
		cout << "Find the 1st distance, enter the second coordinate:" << endl;
		cin >> b;
		cout << "Find the 2nd distance, enter the first coordinate:" << endl;
		cin >> c;
		cout << "Find the 2nd distance, enter the second coordinate:" << endl;
		cin >> d;
		cout << "Find the 3rd distance, enter the first coordinate:" << endl;
		cin >> e;
		cout << "Find the 3rd distance, enter the second coordinate:" << endl;
		cin >> f;
		distance2d(points[a], points[b]);
		distance2d(points[c], points[d]);
		distance2d(points[e], points[f]);
		cout << "\n\n\n\n Distance coordinates:  (w, x, y, z) \n\n";
		cout << "<Distance 1> \n";
		cout << "First Coordinate:  (" << points[a].x << ", " << points[a].y << ") \n";
		cout << "Second Coordinate:  (" << points[b].x << ", " << points[b].y << ") \n";
		cout << "Distance 1 is " << distance2d(points[a], points[b]) << ".\n\n";
		cout << "<Distance 2> \n";
		cout << "First Coordinate:  (" << points[c].x << ", " << points[c].y << ") \n";
		cout << "Second Coordinate:  (" << points[d].x << ", " << points[d].y << ") \n";
		cout << "Distance 1 is " << distance2d(points[c], points[d]) << ".\n\n";
		cout << "<Distance 3> \n";
		cout << "First Coordinate:  (" << points[e].x << ", " << points[e].y << ") \n";
		cout << "Second Coordinate:  (" << points[f].x << ", " << points[f].y << ") \n";
		cout << "Distance 1 is " << distance2d(points[e], points[f]) << ".\n\n";
	}
	infile.close();
	outfile.close();
}

double distance2d(struct Point p0, struct Point p1) {
	double distance; 
	double hd; //horizontal distance
	double vd; //vertical distance
	hd = pow(p0.x - p1.x, 2);
	vd = pow(p0.y - p1.y, 2);
	distance = sqrt(hd + vd); 
	return distance;
}