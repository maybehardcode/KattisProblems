#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int snow, count = 0;
    for (int i = 0; i < n; i++) {
        cin >> snow;
        if (snow > m) count++;
        else break;
    }
    if (count == n) cout << "It had never snowed this early!";
    else cout << "It hadn't snowed this early in " << count << " years!\n";
    return 0;
}