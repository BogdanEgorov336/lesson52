#include <iostream>
using namespace std;

int sum_of_digits(int number) {

	number = number > 0 ? number : -number;

	if (number < 10) {
		return number;
	}

	return sum_of_digits(number / 10) + sum_of_digits(number % 10);
}

int main() {

	int number;
	cout << "Enter number: ";
	cin >> number;

	cout << "Sum: " << sum_of_digits(number) << endl;

	system("pause");
	return 0;
}