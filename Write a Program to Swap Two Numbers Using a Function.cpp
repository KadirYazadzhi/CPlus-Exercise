//Q15. Write a Program to Swap Two Numbers Using a Function.
#include <iostream>

using namespace std;

void swapNumbers(int& a, int& b) {
    int swap;
    swap = a;
    a = b;
    b = swap;

    cout << "Numbers after swap: " << "a = " << a << ", " << "b = " << b << "." << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Numbers before swap: " << "a = " << a << ", " << "b = " << b << "." << endl;

    swapNumbers(a, b);

    return 0;
}
