#include <string>
#include <iostream>
int main() {
    std::string name;
    std::cout << "enter your name: " << '\n';
    std::cin >> name;
    std::cout << "your name is " << name.length() << " letters long!\n";
    return 0;
}