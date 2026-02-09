#include <iostream>
int main() {
    double n = 0, v1 = 0, v2 = 0, w = 0;
    std::cin >> n >> v1 >> v2 >> w;


if (static_cast<double>((((((n - (v1 + v2)) / 2) + v1) / n) * 100)) > w) std::cout << "GET A CRATE OF CHAMPAGNE FROM THE BASEMENT!\n";
// else if ((((n - (v1 + v2)) / 2) + v1) < n/2) std::cout << "RECOUNT!\n";
else if (n-v2 < n/2) std::cout << "RECOUNT!\n";
else std::cout << "PATIENCE, EVERYONE!\n";
//    double temp = static_cast<double>((((((n - (v1 + v2)) / 2) + v1)) / n) * 100);
// double temp = (((n - (v1 + v2)) / 2) + v1);
//    std::cout << temp;
    return 0;
}