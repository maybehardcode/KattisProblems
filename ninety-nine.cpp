//https://open.kattis.com/problems/ninetynine
#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    srand(time(NULL));
    int input = 0, output = 1;
    while (input != 99) {
        if ((input+1)%3 == 0) {
            output = input + 1;
            std::cout << output << std::endl;
        }
        else if ((input+2)%3 == 0) {
            output = input + 2;
            std::cout << output << std::endl;
        }
        else {
            output = input + ((rand() % 2) + 1);
            std::cout << output << std::endl;
        }
        if (output == 99) break;
        std::cin >> input;
    }
    return 0;
}
