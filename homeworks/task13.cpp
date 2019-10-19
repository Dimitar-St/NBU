#include<iostream>

using namespace std;

int main() {
	double point_a_x = 0;
	double point_a_y = 0;

	double point_b_x = 0;
	double point_b_y = 0;
	
	double point_c_x = 0;
	double point_c_y = 0;


	cout << "Point A coordinates: " << endl;
	cin >> point_a_x;
	cin >> point_a_y;

	cout << "Point B coordinates: " << endl;
	cin >> point_b_x;
	cin >> point_b_y;

	cout << "Point C coordinates: " << endl;
 	cin >> point_c_x;
	cin >> point_c_y;

	double area = -1 * ((point_a_x * (point_b_y - point_c_y)) + (point_b_x * (point_c_y - point_a_y)) + (point_c_x * (point_a_y - point_b_y))) / 2;

	cout << "Area: " << area << endl;

	return 0;
}
