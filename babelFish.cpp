#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, string> dic;
    string input;
    getline(cin, input);
    while (!input.empty()) { // until find an empty string (blank line)
        stringstream ss(input);
        string k, v;
        ss >> v >> k;
        dic.emplace(k, v);
        getline(cin, input);
    }
    // getline(cin, input
    while (getline(cin, input)) {
        if (dic.count(input)) {
            cout << dic[input] << '\n';
        }
        else cout << "eh\n";
    }
    return 0;
}