#include <iostream>
#include <string>
#include <vector>
int main() {
    int n = 0;
    std::cin >> n;
    std::string responses[n];
    for (int i = 0; i < n; i++) {
        std::cin >> responses[i];
        for (int j = 0; j < i; j++) {
            if (responses[j] == responses[i]) break;
        }
    }
    std::vector<std::string> costumes;
    

}