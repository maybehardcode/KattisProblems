#include <bits/stdc++.h>
using namespace std;
int main() {
    int rounds, n, pos = 0;
    cin >> rounds >> n;
    string word, output;
    cin >> word;
    for (int i = 0; i < rounds && !word.empty(); i++) {
    int temp = (pos + n - 1) % word.length();
    output += word[temp];
    word.erase(temp, 1);
    pos = temp;
}
cout << output << '\n';
}