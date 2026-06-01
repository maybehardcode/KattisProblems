#include <bits/stdc++.h>
using namespace std;
int getMin(vector<tuple<string, int>> c) {
    int min = get<1>(c[0]);
    for (int i = 1; i < c.size(); i++) {
        if (get<1>(c[i]) < min) min = get<1>(c[i]);
    }
    return min;
}
int main () {
    int n = 0, unique = 1;
    string costume = "";
    cin >> n;
    vector<tuple<string, int>> categories;
    cin >> costume;
    categories.push_back({costume, 1});
    bool foundFlag = false;
    for (int i = 1; i < n; i++) {
        cin >> costume;
        for (int j = 0; j < unique; j++) {
            if (get<0>(categories[j]) == costume) {
                get<1>(categories[j])++;
                foundFlag = true;
                break;
            }
        }
        if (!foundFlag) {
            unique++;
            categories.push_back({costume, 1});
        }
        foundFlag = false;
    }

    int min = getMin(categories);
    vector<string> output;
    for (int i = 0; i < n; i++) {
        if (get<1>(categories[i]) == min) output.push_back(get<0>(categories[i]));
    }
    sort(output.begin(), output.end());
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << '\n';
    }
    return 0;

}