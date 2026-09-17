#include <bits/stdc++.h>
using namespace std;
void print(string a, char b, int c, int d) {
    int width = a.size() + ((c + d)*2);
    for (int k = 0; k < c; k++) {
        for (int i = 0; i < width; i++) cout << b;
        cout << '\n';
    }
    for (int i = 0; i <d; i++) {
        for (int j = 0; j < c; j++) cout << b;
        for (int j = 0; j < (d*2) + a.size(); j++) cout << ' ';
        for (int j = 0; j < c; j++) cout << b;
        cout << '\n';
    }
    //print main line
    for (int i = 0; i < c; i++) cout << b;
    for (int i = 0; i < d; i++) cout << ' ';
    cout << a;
    for (int i = 0; i < d; i++) cout << ' ';
    for (int i = 0; i < c; i++) cout << b;

    //print bottom half
    cout << '\n';
    for (int i = 0; i <d; i++) {
        for (int j = 0; j < c; j++) cout << b;
        for (int j = 0; j < (d*2) + a.size(); j++) cout << ' ';
        for (int j = 0; j < c; j++) cout << b;
        cout << '\n';
    }


    for (int k = 0; k < c; k++) {
        for (int i = 0; i < width; i++) cout << b;
        cout << '\n';
    }


}
int main() {
    string a; //c, d; // a is name b is frame c is border thickness d is space thickness
    char b;
    int c, d;
    cin >> a >> b >> c >> d;
    // cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    // int width = a.size() + c + d;
    //print first line,
    //print only at start plus thickness, and end - thickness till end.
    //print for width /2 + 1 ts
    //do same thing in reverse
    print(a, b, c, d);

    return 0;
}