#include <iostream>
#include <string>
#include "Karatsuba.h"
#include "Schonhage.h"
#include "method.h"

int main() {
    
    int act;
    cout << "Enter what do u want (1, 3, 8 , 7) -> " << endl;
    cin >> act;
    string first, second;

    long a, b;
    int n, m;
    int fact;

    Karatsuba kar;
    Schonhage sch;
    Method mth;

    switch (act)
    {
    case 1: 
        cout << "\nKaratsuba\n";
        cout << "enter the first multiplier => ";
        cin >> first;

        cout << "enter the second multiplier => ";
        cin >> second;

        cout <<"Result = "<< kar.multiply(first, second) << endl;
        break;
    case 2:
        break;
    case 3:
        cout << "\tSchonhage\n";
        cout << "enter the first multiplier => ";
        cin >> a;

        cout << "enter the second multiplier => ";
        cin >> b;

        n = sch.noOfDigit(a);
        m = sch.noOfDigit(b);

        cout << "Result = ";
        sch.schonhageStrassenMultiplication(a, b, n, m);
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        cout << "\tDixon's method\n";
        cout << "enter a number to factorize => ";
        cin >> fact;

        cout << "Result = ";
        mth.factor(fact);
        break;
    case 8:
        cout << "\tpollardRho method\n";
        cout << "enter a number to factorize => ";
        cin >> fact;

        cout << "Result = " << mth.pollardRho(fact) << endl;
        break;
    case 9:
        break;
    case 10:
        break;
    default:
        break;
    }


    return 0;
}