#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n = 0, m = 0;
    cin >> n >> m; // n is Number of prizes, M is number of different types of Stickers
    vector<vector<int>> prizes(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        // prizes[i] starts as an empty vector, so allocate index 0 for the
        // prize value and indices 1 through k for the required sticker types.
        prizes[i].resize(k + 1);

        for (int j = 1; j < k+1; j++) { //types of prizes
            // cin >> prizes[i][k]; // Mistake: this overwrites the same position every time.
            cin >> prizes[i][j];    // Store each sticker type in its own position.
        }
        cin >> prizes[i][0]; //prize value placed in pos 0 in vector of prizes.
    }
    vector<int> collected(m);
    for (int i = 0; i < m; i++) cin >> collected[i];

    sort(prizes.begin(), prizes.end(), greater<vector<int>>());
    int cash = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < prizes[i].size(); j++) { // equal to one because prize value in index 0
            // if (collected[prizes[i][j]] == 0) break;
            // Sticker labels are 1-based, but vector indices are 0-based.
            if (collected[prizes[i][j] - 1] == 0) break;
            else if (j == prizes[i].size() - 1) {
                cash += prizes[i][0];
                // j = 1; // Mistake: the for-loop increments j, so this would restart at 2.
                j = 0;    // After the loop's j++, checking restarts at sticker index 1.

                for (int k = 1; k < prizes[i].size(); k++) {
                    // collected[prizes[i][k]]--;
                    // Convert the 1-based sticker label to a 0-based index here too.
                    collected[prizes[i][k] - 1]--;
                }
            }
        }
    }
    cout << cash << '\n';
    //iterate through highest potential prize value
    //while each sticker type is non zero in collected, add prize value to count && -- each sticker
    //output prize value
}


int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        solve();
    }


    return 0;
}
