#include<iostream>
#include<cmath>

using namespace std;

double perimeter(double side) {
	double result = 3 * side;

	return result;
}

double area(double side) {
	double a = sqrt(3) / 4 * (side * side);

	return a;
}

int main() {
	
	double side = 0;
	
	cout << "Side: " << endl; 
	cin >> side; 


	double perimeter_of_triangle = perimeter(side);
	double area_of_triangle = area(side);

	cout << "Perimeter: " << perimeter_of_triangle << endl;
	cout << "Area: " << area_of_triangle << endl;

	return 0;
}
