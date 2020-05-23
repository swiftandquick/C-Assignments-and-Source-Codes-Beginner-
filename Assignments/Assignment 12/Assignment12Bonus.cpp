#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

const int MAX_POINTS = 12;

struct Point{
	double w;
	double x;
	double y;
	double z;
};

double distance4d(struct Point p0, struct Point p1);

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

	infile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project31/points4d.txt");
	outfile.open("C:/Users/cheny13/Documents/Visual Studio 2013/Projects/Project31/output.txt");
	if (infile.fail()) {
		cout << "The file fails to open. \n";
	}
	else{
		int i = 0;
		while (infile >> points[i].w >> points[i].x >> points[i].y >> points[i].z) {
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
		cout << "\n\n\n\n Distance coordinates:  (w, x, y, z) \n\n";
		distance4d(points[a], points[b]);
		distance4d(points[c], points[d]);
		distance4d(points[e], points[f]);
		cout << "<Distance 1> \n";
		cout << "First Coordinate:  (" << points[a].w << ", " << points[a].x << ", " << points[a].y << ", " << points[a].z << ") \n";
		cout << "Second Coordinate:  (" << points[b].w << ", " << points[b].x << ", " << points[b].y << ", " << points[b].z << ") \n";
		cout << "Distance 1 is " << distance4d(points[a], points[b]) << ".\n\n";
		cout << "<Distance 2> \n";
		cout << "First Coordinate:  (" << points[c].w << ", " << points[c].x << ", " << points[c].y << ", " << points[c].z << ") \n";
		cout << "Second Coordinate:  (" << points[d].w << ", " << points[d].x << ", " << points[d].y << ", " << points[d].z << ") \n";
		cout << "Distance 2 is " << distance4d(points[c], points[d]) << ".\n\n";
		cout << "<Distance 3> \n";
		cout << "First Coordinate:  (" << points[e].w << ", " << points[e].x << ", " << points[e].y << ", " << points[e].z << ") \n";
		cout << "Second Coordinate:  (" << points[f].w << ", " << points[f].x << ", " << points[f].y << ", " << points[f].z << ") \n";
		cout << "Distance 3 is " << distance4d(points[e], points[f]) << ".\n\n";
	}
	infile.close();
	outfile.close();
}

double distance4d(struct Point p0, struct Point p1) {
	double distance;
	double d1, d2, d3, d4;
	d1 = pow(p0.w - p1.w, 2);
	d2 = pow(p0.x - p1.x, 2);
	d3 = pow(p0.y - p1.y, 2);
	d4 = pow(p0.z - p1.z, 2);
	distance = sqrt(d1 + d2 + d3 + d4);
	return distance;
}