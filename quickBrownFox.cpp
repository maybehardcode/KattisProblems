#include <bits/stdc++.h>
using namespace std;

void solve() {
    string panagram;
    getline(cin, panagram);
    
    std::transform(panagram.begin(), panagram.end(), panagram.begin(), [](unsigned char c) {
        return std::tolower(c);
    }); // literally string lower each char to lower case bruh

    map<char, bool> letters;
    for (char c = 'a'; c <= 'z'; c++) {
        letters[c] = false;
    }
    letters[' '] = true;
    letters['.'] = true;
    letters[','] = true;
    letters['?'] = true;
    letters['!'] = true;
    letters['\''] = true;  // apostrophe
    letters['"'] = true;   // double quote

    int count = 0;
    for (int i = 0; i < panagram.length(); i++) {
        if (!letters[panagram[i]]) { 
            letters[panagram[i]] = true;
            count ++;
            // cout << "letters[panagram[i]]: " << letters[panagram[i]] << '\n';
        }
    }
    if (count == 26) cout << "pangram" << '\n';
    else {
        cout << "missing ";
        for (char c = 'a'; c <= 'z'; c++) {
            if (letters[c] == false) {
                cout << c;
            }
        }
        cout << '\n';
    }

    //
    // cout << letters[panagram[0]];


}


int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; i++) {
        solve();
    }
    return 0;
}