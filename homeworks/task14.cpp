#include<iostream>
#include<string>

using namespace std;

int get_length(int coordinates_of_c_y, int coordinates_of_b_y) {
	int length = coordinates_of_c_y - coordinates_of_b_y;

	return length;	
}

int get_width(int coordinates_of_b_x, int coordinates_of_a_x) {
	int width = coordinates_of_b_x - coordinates_of_a_x;
	
	return width;
} 

double calculate_volume(string type_of_the_shape) {

	double volume = 0;
	
	int coordinates_of_a_x = 0;
	int coordinates_of_a_y = 0;

	int coordinates_of_b_x = 0;
	int coordinates_of_b_y = 0;

	int coordinates_of_c_x = 0;
	int coordinates_of_c_y = 0;

	int coordinates_of_d_x = 0;
	int coordinates_of_d_y = 0;

	int height = 0;

	cout << "Height: " << endl;
	cin >> height;

	if (type_of_the_shape == "triangle") {
		cout << "Coordinates of point A: " << endl;

		cin >> coordinates_of_a_x;
		cin >> coordinates_of_a_y;

		cout << "Coordinates of point B: " << endl;

		cin >> coordinates_of_b_x;
		cin >> coordinates_of_b_y;

		cout << "Coordinates of point C: " << endl;

		cin >> coordinates_of_c_x;
		cin >> coordinates_of_c_y;
		
		volume = (get_length(coordinates_of_c_y, coordinates_of_b_y) *
			 get_width(coordinates_of_b_x, coordinates_of_a_x) * 				 height) / 2;
				

	} else {
		cout << "Coordinates of point A: " << endl;

		cin >> coordinates_of_a_x;
		cin >> coordinates_of_a_y;

		cout << "Coordinates of point B: " << endl;

		cin >> coordinates_of_b_x;
		cin >> coordinates_of_b_y;

		cout << "Coordinates of point C: " << endl;

		cin >> coordinates_of_c_x;
		cin >> coordinates_of_c_y;

		cout << "Coordinates of point D: " << endl;

		cin >> coordinates_of_d_x;
		cin >> coordinates_of_d_y;
		
		volume = get_length(coordinates_of_c_y, coordinates_of_b_y) *
			 get_width(coordinates_of_b_x, coordinates_of_a_x) * 				 height;
	}

	return volume;
	
} 

int main() {
	
	string type_of_the_shape = "";


	cout << "What is the shape of the prism triangle or square ? " << endl;
	cin >> type_of_the_shape;

	double volume = calculate_volume(type_of_the_shape);
	
	cout << "Volume: " << volume << endl;
	

	return 0;
}
