//Q4. Write a Program to Swap Two Numbers.

#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
	int c;

	cin >> a >> b;
	cout << a << " " << b;
	
	c = a;
	a = b;
	b = c;

	cout << a << " " << b;

	return 0;
}