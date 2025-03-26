#include <iostream>
using namespace std;

int count_number_digit(int number) {

	number = number > 0 ? number : -number;

	if (number < 10) {
		return 1;
	}

	return count_number_digit(number) + number % 10;
}

int main() {

	int number;
	cout << "Enter the number: ";
	cin >> number;

	cout << count_number_digit(number) << endl;

	system("pause");
	return 0;
}