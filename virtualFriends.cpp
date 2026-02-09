// #include <iostream>
// #include <string>
// #include <vector>
// int main() {
//     int t = 0, f = 0;
//     std::cin >> t;
//     for (int i = 0; i < t; i++) { //loop over t test cases
//         std::cin >> f;
//         std::vector<std::string> names;
//         std::vector<int> friends;
//         int index = 0;
//         for (int j = 0; j < f; j++) { //f friendships

//         }
//     }

// }
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class DisjointSet {
private:
    unordered_map<string, string> parent;
    unordered_map<string, int> size;

public:
    string find(string person) {
        if (parent[person] != person)
            parent[person] = find(parent[person]); // Path compression
        return parent[person];
    }

    int unionSets(string person1, string person2) {
        string root1 = find(person1);
        string root2 = find(person2);

        if (root1 != root2) {
            if (size[root1] > size[root2]) {
                parent[root2] = root1;
                size[root1] += size[root2];
            } else {
                parent[root1] = root2;
                size[root2] += size[root1];
            }
        }
        return size[find(root1)];
    }

    void addPerson(string person) {
        if (parent.find(person) == parent.end()) {
            parent[person] = person;
            size[person] = 1;
        }
    }
};

void processTestCase(int F) {
    DisjointSet ds;
    
    for (int i = 0; i < F; i++) {
        string person1, person2;
        cin >> person1 >> person2;

        ds.addPerson(person1);
        ds.addPerson(person2);
        
        cout << ds.unionSets(person1, person2) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int F;
        cin >> F;
        processTestCase(F);
    }

    return 0;
}
