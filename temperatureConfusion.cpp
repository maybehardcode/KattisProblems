#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    // cout << a << ' ' << b << ' ' << c << '\n';

    /*
    numerator=5(a−32b)
	​denominator=9b
    */
    int numerator = 5 * (a - (32*b));
    int denominator = 9*b;
    int divisor = gcd(numerator, denominator);
    while (divisor != 1) {
        numerator /= divisor;
        denominator /= divisor;
        divisor = gcd(numerator, denominator);
    }
    // cout << "divisor is: " << divisor << '\n' << "num is: " << numerator << " denom is: " <<  denominator << '\n';
    cout << numerator << '/' << denominator << '\n';
    return 0;
}