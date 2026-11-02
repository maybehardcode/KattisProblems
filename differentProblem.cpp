//absolute value difference of two large numbers end by EOF
#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    // getline(cin, input);
    // do
    // {
        // stringstream ss(input);
        // long long int a, b;
        // ss >> a;
        // ss >> b;
        // cout << abs(a - b);
    // } while (getline(cin, input));
    while (getline(cin, input)) {
        stringstream ss(input);
        long long int a, b;
        ss >> a;
        ss >> b;
        cout << abs(a - b) << '\n';
    }
    
    return 0;
}