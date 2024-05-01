//Q6.Write a Program to Find Compound Interest.


#include <bits/stdc++.h>
using namespace std;


int main()
{
    double principal, rate, time;
    cin >> principal >> rate >> time;


    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;

    cout << "Compound interest is " << CI;

    return 0;
}