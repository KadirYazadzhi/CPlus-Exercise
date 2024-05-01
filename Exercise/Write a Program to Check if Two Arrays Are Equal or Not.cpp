//Q16. Write a Program to Check if Two Arrays Are Equal or Not.
#include <iostream>

using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int size1, int size2) {
    if (size1 != size2) {
        return false;
    }

    for (int i = 0; i < size1; ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    const int maxSize = 100;
    int arr1[maxSize], arr2[maxSize];
    int size1, size2;

    cout << "Enter size of array 1: ";
    cin >> size1;
    cout << "Enter elements of array 1: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter size of array 2: ";
    cin >> size2;
    cout << "Enter elements of array 2: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2, size1, size2)) {
        cout << "Arrays are equal." << endl;
    } else {
        cout << "Arrays are not equal." << endl;
    }

    return 0;
}


