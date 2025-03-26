#include <iostream>
using namespace std;

bool is_power_of_three(int number) {

	if (number <= 0 || number % 3 != 0) {
		return false;
	}

	if (number == 1) {
		return true;
	}

	return is_power_of_three(number / 3);
}

int main() {

	int number;
	cout << "Enter the number: ";
	cin >> number;

	cout << is_power_of_three(number) << endl;

	return 0;
}