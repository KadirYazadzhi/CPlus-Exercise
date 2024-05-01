//Q7. Write a Program to Check Even or Odd Integers.

#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	if (number % 2 == 0) {
		cout << "even" << endl;
	}
	else {
		cout << "odd" << endl;
	}
}