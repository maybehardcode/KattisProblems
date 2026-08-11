#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> trees;
    string tree;
    int count = 0;
    //trees automatically creates "Ash" if not exist, sets 0, and then ++ iterates it making it 1.
    while (getline(cin, tree)) trees[tree]++, count++;
    
    for (const auto& [name, num] : trees) {
        double percentage = num * 100.0 / count;
        cout << name << " " << fixed << setprecision(6) << percentage  << '\n';
    }
    return 0;
}