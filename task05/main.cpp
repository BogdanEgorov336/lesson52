#include <iostream>
using namespace std;

int find_max_digit(int number) {

	number = number > 0 ? number : -number;

	if (number < 10) {
		return number;
	}

	int d = number % 10;

	number = find_max_digit(number / 10);

	return d > number ? d : number;
}

int main() {

	int number;
	cout << "Enter the number: ";
	cin >> number;

	cout << "Max number: " << find_max_digit(number) << endl;

	return 0;
}