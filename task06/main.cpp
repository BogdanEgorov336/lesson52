#include <iostream>
using namespace std;

int pow_number(int number, int x) {

	if (x < 0) {
		return 0;
	}

	if (x == 0) {
		return 1;
	}

	return number * pow_number(number, x - 1);
}

int main() {

	int number;
	cout << "Enter the number: ";
	cin >> number;

	int x;
	cout << "Enter the x: ";
	cin >> x;

	cout << pow_number(number, x) << endl;

	return 0;
}