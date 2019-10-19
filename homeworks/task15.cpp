/* NEEDS FINISHING AND IMPROVING*/

#include<iostream>
#include<string>

using namespace std;

double area_traingle(int x1, int y1, int x2, int y2, int x3, int y3) {
	double result = -1 * ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (y3 * (y1 - y1))) / 2;

	return result;
}

bool is_inside_a_traingle(int x1, int y1, int x2, int y2, int x3, int y3, int p1, int p2) {

	double A = area_traingle(x1, y1, x2, y2, x3, y3);
	double A1 = area_traingle(p1, p2, x2, y2, x3, y3);
	double A2 = area_traingle(x1, y1, p1, p2, x3, y3);
	double A3 = area_traingle(x1, y1, x2, y2, p1, p2);

	return (A == A1 + A2 + A3);
}

int main() {

	string shape = "";
	bool is_inside = false;
	int point_a1, 
	    point_a2,
            point_b1,
	    point_b2,
	    point_c1,
	    point_c2,
	    point_d1,
	    point_d2,
	    point1,
	    point2;

	cout << "What is the shape square or a triangle ?" << endl;
	cin >> shape;

	cout << "Give a point coordinates:" << endl;
	
	cin >> point1;
	cin >> point2; 


	if (shape == "tri") {

		cout << "Point A: " << endl;
		
		cin >> point_a1;
		cin >> point_a2;

		cout << "Point B: " << endl;
		
		cin >> point_b1;
		cin >> point_b2;

		cout << "Point C: " << endl;
		
		cin >> point_c1;
		cin >> point_c2;

		is_inside = is_inside_a_traingle(point_a1, point_a2, point_b1, point_b2, point_c1, point_c2, point1, point2); 
	
	} else {
	 
	}

	cout << "Is inside the " << shape << ": " << is_inside << endl;  
}












