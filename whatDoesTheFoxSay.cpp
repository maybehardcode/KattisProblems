#include <iostream>
#include <string>
#include <sstream>
int main() {
    std::string loop;
    std::getline(std::cin, loop);
    int numba = std::stoi(loop);
    for (int i = 0; i < numba; i++) {
        std::string input, animal, output;
        std::getline(std::cin, input);
        while (animal != "what does the fox say?") {
            output.clear();
            std::getline(std::cin, animal);
            std::stringstream s(animal);
            std::string temp;
            while (s >> temp && temp != "goes");
            s >> animal; //animal is sound we DONT want
            std::stringstream sound(input); //sound is og input noises
            while (sound >> temp) { //loop to exclude known noise
            if (temp != animal) output += temp + ' ';
            }
            input = output;//cleaned input
        }
        input.pop_back();
        std::cout << input <<'\n';
    }
    return 0;
}