#include <bits/stdc++.h>
using namespace std;

// maybe something to do the t9 mapping? helper function?
//
string teenine(string word) {
    string strokes = "";
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 'a' && word[i] <= 'c') strokes += '2';
        else if (word[i] >= 'd' && word[i] <= 'f') strokes += '3';
        else if (word[i] >= 'g' && word[i] <= 'i') strokes += '4';
        else if (word[i] >= 'j' && word[i] <= 'l') strokes += '5';
        else if (word[i] >= 'm' && word[i] <= 'o') strokes += '6';
        else if (word[i] >= 'p' && word[i] <= 's') strokes += '7';
        else if (word[i] >= 't' && word[i] <= 'v') strokes += '8';
        else if (word[i] >= 'w' && word[i] <= 'z') strokes += '9';
    }
    return strokes;
}


int main() {
    int n; //number of words in dictionary (valid words)
    cin >> n;
    vector<string> dictionary(n);
    string keys;
    for (int i = 0; i < n; i++) {
        // cin >> dictionary[i];
        string word;
        cin >> word;
        // dictionary.push_back(teenine(word));
        dictionary[i] = teenine(word);
        // cout << "word: " << word << " changed to: " << teenine(word) << '\n';
    }
    cin >> keys;
    // cout << "keys captured as: " << keys;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (dictionary[i] == keys) count ++;
    }
    cout << count << '\n';
    return 0;
}