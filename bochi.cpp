//https://open.kattis.com/problems/bocchinorokku
#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> countSmallerElements(const std::vector<int> weights) {
    int n = weights.size(); //we could have inputted n as a paramater given nature of question
    std::vector<std::pair<int, int>> indexed_weights;
    for (int i = 0; i < n; i++) {
        indexed_weights.push_back({weights[i], i});
    }
    sort(indexed_weights.begin(), indexed_weights.end());
    std::vector<int> result(n, 0);
    for (int rank = 0; rank < n; rank++) {
        int original_index = indexed_weights[rank].second;
        result[original_index] = rank;  // rank represents count of smaller elements
    }
    
    return result;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> weights[i];
    }
    std::vector<int> result = countSmallerElements(weights);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}