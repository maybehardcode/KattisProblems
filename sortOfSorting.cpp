#include <bits/stdc++.h>
using namespace std;
bool  compare(string a, string b) {
    return a.substr(0, 2) < b.substr(0, 2);
}

int main() {
    int n;
    bool flag = false;
    while (cin >> n) {
        if (n!=0 && flag == true) cout << '\n';
        vector<string> names(n);
        for (int i = 0; i < n; i++) cin >> names[i];
        stable_sort(names.begin(), names.end(), compare);
        for (int i = 0; i < n; i++) cout << names[i] << '\n';
        flag = true;
    }
    return 0;
}