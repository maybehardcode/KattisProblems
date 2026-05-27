#include <bits/stdc++.h>
// using namespace std;
//justABit Kattis easy
int main() {
    std::string binaryNum = "";
    std::cin >> binaryNum;
    unsigned count = 0;
    for (int i = 0; i < binaryNum.length(); i++) {
        if (binaryNum[i] == '0') count ++;
    }
    std::cout << count << ' ' << binaryNum.length() - count << '\n';
    return 0;
}