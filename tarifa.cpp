#include <iostream>
int main() {
    int n = 0, x = 0, total = 0, p = 0;
    std::cin >> x;
    std::cin >> n;
    total += x*n;
    for (int i = 0; i < n; i++) {
        std::cin >> p;
        total -= p;
    }
    std::cout << total + x << '\n';
    return 0;
}