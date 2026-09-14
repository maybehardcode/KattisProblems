//5:04
#include <bits/stdc++.h>
using namespace std;
int main() {
    string rhyme;
    getline(cin, rhyme);
    int n = 0;
    cin >> n;
    vector<string> kids(n);
    for (int i = 0; i < n; i++) {
        cin >> kids[i];
    }
    stringstream ss(rhyme);
    int words = 0;
    while (ss >> rhyme) words++;

    vector<string> teamA, teamB;

    int offset = 0;
    for (int i = 0; i < n; i++) {
        int pos = ((words + offset - 1) % kids.size());


        if (i % 2 == 0) teamA.push_back(kids[pos]), kids.erase(kids.begin() + pos);
        else teamB.push_back(kids[pos]), kids.erase(kids.begin() + pos);
        offset = pos;
        // cout << "i is: " << i << " pos is: " << pos << '\n';
    }

    // cout << teamA.size() << '\n';
    // for (int i = teamA.size() - 1; i >= 0; i--) {
    //     cout << teamA[i] << '\n';
    // }

    // cout << teamB.size() << '\n';
    // for (int i = teamB.size() - 1; i >= 0; i--) {
    //     cout << teamB[i] << '\n';
    // }
    cout << teamA.size() << '\n';
    for (int i = 0; i < teamA.size(); i++) {
        cout << teamA[i] << '\n';
    }

    cout << teamB.size() << '\n';
    for (int i = 0; i < teamB.size(); i++) {
        cout << teamB[i] << '\n';
    }
    return 0;
}