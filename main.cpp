#include <iostream>
#include <string>
#include "Karatsuba.h"
#include "Schonhage.h"


int main() {
    
    // test Karatsuba
    /*
    Karatsuba kar;
    string s1, s2;
    cin >> s1 >> s2;
    cout << kar.multiply(s1, s2) << endl;
    */
    //

    Schonhage sch;
    long a, b;
    cin >> a;
    cin >> b;
    int n = sch.noOfDigit(a);
    int m = sch.noOfDigit(b);
    sch.schonhageStrassenMultiplication(a, b, n, m);

    return 0;
}