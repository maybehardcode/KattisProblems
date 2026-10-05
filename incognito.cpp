#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n = 0;
    cin >> n;
    unordered_map<string, int> categories;
    for (int i = 0; i < n; i++) {
        string a, c;
        cin >> a >> c;
        categories[c]++;
    }
    int total = 1;
    for (const auto& entry : categories) {
        total *= entry.second + 1;
    }
    cout << total - 1 << '\n';
}
int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        solve();
    }
    return 0;
}