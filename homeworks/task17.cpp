#include<iostream>

using namespace std;

int main() {
	int x = 0,
	    k = 1;

	cout << "Enter a start number(x) and end number(k): " << endl;

	cin >> x;
	cin >> k;

	for(int i = x; i <= k; i++) {
		if(i == k) {
			cout << i << endl;
		} else { 
			cout << i << " ";	
		}
	}

	

	return 0;
}
