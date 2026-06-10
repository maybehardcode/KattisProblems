#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0, k = 0, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            int temp = 0;
            cin >> temp;
            total+=temp;
        }
        cout << total - k + 1<< ' ';
        total = 0;
    }

    return 0;
}
