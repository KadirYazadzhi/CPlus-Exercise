//Q12. Write a Program to Make a Simple Calculator.
#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    string symbol;
    cout << "Enter symbol: ";
    cin >> symbol;

    if (symbol == "+") {
        cout << a + b << endl;
    }
    else if (symbol == "-") {
        cout << a - b << endl;
    }
    else if (symbol == "*") {
        cout << a * b << endl;
    }
    else if (symbol == "/") {
        if (b != 0) {
            cout << a / b << endl;
        }
        else {
            return 0;
        }
    }
    else if (symbol == "^") {
        cout << pow(a, b);
    }
}
