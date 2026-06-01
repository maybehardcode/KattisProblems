#include <bits/stdc++.h>
using namespace std;
int main () {
    int n = 0, t = 0, a = 0, output = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t >> a;
        if (t) output -= a;
        else output += a;
        if (output < 0) output = 0;
        // cout << "output = " << output << '\n';
    }
    cout << output << '\n';
    return 0;
}