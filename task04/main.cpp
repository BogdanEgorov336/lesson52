#include <iostream>
using namespace std;

bool function(int number1, int number2) {

	if (number1 < 10) {

		if (number1 == number2) {
			return true;
		}
		else {
			return false;
		}
	}

	return function(number1 / 10, number2 - number1 % 10);
}

int main() {

	int number1, number2;
	cin >> number1 >> number2;

	cout << function(number1, number2);


	return 0;
}