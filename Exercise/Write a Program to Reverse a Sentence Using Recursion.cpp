//Q13. Write a Program to Reverse a Sentence Using Recursion.
#include <iostream>
#include <string>

using namespace std;

void reverseString(string& toReverse) {
    int n = toReverse.length();

    for (int i = 0; i < n / 2; i++) {
        swap(toReverse[i], toReverse[n - i - 1]);
    }
    cout << toReverse << endl;
}

int main() {
    string toReverse;
    getline(cin, toReverse);
    reverseString(toReverse);

    return 0;
}
