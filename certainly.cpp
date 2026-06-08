#include <iostream>
#include <string>

int main() {
    std::string text;
    std::getline(std::cin, text);
    std::string sub = "certainly";
    size_t index = 0;
    int count = 0;

    index = text.find(sub, index);
    while (index != std::string::npos) {
        count++;
        index = text.find(sub, index + sub.length());
    }

    std::cout << count << std::endl;
    return 0;
}
