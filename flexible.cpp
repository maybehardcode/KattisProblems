#include <bits/stdc++.h>
using namespace std;
int main() {
    int width, p;
    cin >> width >> p;
    vector<int> partitions(p+2);
    partitions[0] = 0, partitions[p+1] = width;
    for (int i = 1; i < p+1; i ++) {
        cin >> partitions[i];
    }

    set<int> rooms;

    for (int i = 0; i < partitions.size(); i++) {
        for (int j = i+1; j < partitions.size(); j++) {
            rooms.insert(partitions[j] - partitions[i]);
        }
    }

    for (auto x : rooms) cout << x << ' ';

    return 0;
}