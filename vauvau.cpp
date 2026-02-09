#include <iostream>
#include <algorithm>
int main() {
    int a = 0, b = 0, c = 0, d = 0, p = 0, m = 0, g = 0, counterA = 0, counterB = 0;
    std::cin >> a >> b >> c >> d >> p >> m >> g;
    bool barkA = false, barkB = false, pScared = false, mScared = false, gScared = false;
    if (a > 0) barkA = true;
    if (c > 0) barkB = true;
    while (counterA < std::max(p, std::max(m, g))) { //main clock "timer"/counterA, maybe two main loops instead of 1 to calculate different dogs
        if (barkA) counterA += a;
        else counterA += b;
        barkA = !barkA;//done? cout in relation to bool var
        if (p >= counterA) pScared = barkA, p = 1001;
        if (m >= counterA) mScared = barkA, m = 1001;
        if (g >= counterA) gScared = barkA, g = 1001;
    }
    if (pScared) std::cout << "p scared\n";
    else std::cout << "p chillin\n";
    if (mScared) std::cout << "m scared\n";
    else std::cout << "m chillin\n";
    if (gScared) std::cout << "g scared\n";
    else std::cout << "g chillin\n";
    return 0;
}