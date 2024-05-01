//Q9. Write a Program to Check if a Given Year Is a Leap Year.
#include <iostream>

suing namespace std;

int main() {
    int year;
    cin << year;

    if (year % 4 == 0) {
        cout << year << " is a Leap year." << endl;
    }
    else {
        cout << year << " is not a Leap year." << endl;
    }

    return 0;
}