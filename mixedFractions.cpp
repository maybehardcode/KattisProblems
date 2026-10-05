#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, den;
    cin >> num >> den;
    while (num != 0 && den != 0) {
        int whole = num / den;
        num -= whole * den;
        cout << whole << ' ' << num << " / " << den << '\n';
        cin >> num >> den;
    }
    return 0;
}