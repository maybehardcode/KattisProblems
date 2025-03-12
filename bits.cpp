//https://open.kattis.com/problems/bits
#include <iostream>
#include <string>
int main() {
    int t = 0; // number of test cases
    int x = 0;
    std::string digits = "", temp = "", binary = "";
    int max = 0, attempt = 0;
    std::cin >> t;
    for (int z = 0; z < t; z++) { //iterate over t test cases
        std::cin >> digits; //the test case
        for (int i = 0; i < digits.size(); i ++) {
            temp = "";
            attempt = 0;
            for (int j = 0; j <= i; j++) {//iterate over each subset of the decimal digits
                temp += digits[j];
            }
            x = std::stoi(temp);
            temp = "";
            while (x > 0) { //temp becomes the binary representation of x (in reverse)
                temp += std::to_string(x%2);
                x = x/2;
            }
            for (int m = 0; m < temp.size(); m++) {
                if (temp[m] == '1') attempt ++;
            }
            
            if (attempt > max) max = attempt;
        }
        std::cout << max << std::endl;
        max = 0;
    }
    std::cout << '\n';
    return 0;
}