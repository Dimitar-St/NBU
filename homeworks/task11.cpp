#include<iostream>

using namespace std;

double surface_area(double radius, double pi) {
	double surface = pi * radius * radius;

	return surface;
}

double cicumference_of_circle(double radius, double pi) {
	double cmf = 2 * pi * radius;

	return cmf;
}

int main() {

	const double pi = 3.14;
	double rad = 0;

	cout << "Radius: " << endl;
	cin >> rad;	

	double surface = surface_area(rad, pi);
	double cicumference = cicumference_of_circle(rad, pi);
	
	cout << "Surface: " << surface << endl;
	cout << "Cicumference: " << cicumference << endl;

	return 0;
}
