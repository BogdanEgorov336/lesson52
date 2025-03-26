#include <iostream>
using namespace std;

bool function(int number1, int number2) {

	number1 = number1 > 0 ? number1 : -number1;
	number2 = number2 > 0 ? number2 : -number2;

	if (number1 < 10) {

		return number1 == number2;
	}

	return function(number1 / 10, number2 - number1 % 10);
}

int main() {

	int number1, number2;
	cin >> number1 >> number2;

	cout << function(number1, number2) << endl;

	system("pause");
	return 0;
}