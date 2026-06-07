#include <bits/stdc++.h>
using namespace std;

int findRoot(vector<int>& parent, int node) {
    if (parent[node] == node) {
        return node;
    }

    parent[node] = findRoot(parent, parent[node]);
    return parent[node];
}

bool unite(vector<int>& parent, vector<int>& groupSize, int a, int b) {
    int rootA = findRoot(parent, a);
    int rootB = findRoot(parent, b);

    if (rootA == rootB) {
        return false;
    }

    if (groupSize[rootA] < groupSize[rootB]) {
        swap(rootA, rootB);
    }

    parent[rootB] = rootA;
    groupSize[rootA] += groupSize[rootB];
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cities = 0;
    cin >> cities;

    for (int city = 0; city < cities; city++) {
        int endpoints = 0;
        cin >> endpoints;

        vector<int> parent(endpoints);
        vector<int> groupSize(endpoints, 1);

        for (int i = 0; i < endpoints; i++) {
            parent[i] = i;
        }

        int roads = 0;
        cin >> roads;

        int components = endpoints;

        for (int i = 0; i < roads; i++) {
            int a = 0;
            int b = 0;
            cin >> a >> b;

            if (unite(parent, groupSize, a, b)) {
                components--;
            }
        }

        cout << components - 1 << '\n';
    }

    return 0;
}
