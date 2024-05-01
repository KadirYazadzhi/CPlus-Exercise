//Q5. Write a Program to Find the Size of int, float, double, and char.

#include <iostream>

using namespace std;

int main() {
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    cout << "Size of int is: " << sizeof(integerType) << endl;
 
    cout << "Size of char is: " << sizeof(charType) << endl;

    cout << "Size of float is: " << sizeof(floatType) << endl;

    cout << "Size of double is: " << sizeof(doubleType) << endl;

    return 0;
}