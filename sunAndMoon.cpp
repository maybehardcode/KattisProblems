#include <iostream>
int main() {
    int dS = 0, yS = 0, dM = 0, yM = 0;
    std::cin >> dS >> yS >> dM >> yM;
    int nextSun = yS-dS, nextMoon = yM-dM;
    while (nextSun != nextMoon) {
        if (nextMoon < nextSun) nextMoon+= yM;
        else nextSun += yS;
    }
    std::cout << nextMoon << '\n';
    return 0;
}