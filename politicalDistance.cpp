#include <bits/stdc++.h>
using namespace std;

int main() {
    long long pX, pY, vX, vY;
    cin >> pX >> pY;
    cin >> vX >> vY;

    long long dx = pX - vX;
    long long dy = pY - vY;

    cout << dx * dx + dy * dy << '\n';

    return 0;
}