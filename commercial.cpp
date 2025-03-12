//https://open.kattis.com/problems/commercials
#include <iostream>
int main() {
    int n = 0, p = 0, index = 0, value = 0, temp = 0;
    std::cin >> n >> p;
    int times[n];
    for (int i = 0; i < n; i ++) {
        std::cin >> times[i];
    }
    for (int i = 0; i < n; i++) {
        if (times[i] > p) { // found starting case thats profitable
            temp = times[i] - p; //temp gets initial value
            index = i+1; //initialize index to next pos in array times
            while (temp > 0 && index < n) { //as long as temp doesnt go below 0 as non positive garuantees end case
                if (temp > value) value = temp; //reassign value as we find bigger temps
                temp += times[index] - p; //add next value to temp 
                index++; //increment index
            }
            if (temp > value) value = temp;
        }
    }
    std::cout << value << '\n';
    return 0;
}