#include <bits/stdc++.h>
std::vector<int> minVal(std::vector<std::vector<int>> emp) {
    int minPool = emp[0][0], minBill = emp[0][1];
    for (int i = 1; i < emp.size(); i++) {
        if (emp[i][0] < minPool) minPool = emp[i][0];
        if (emp[i][1] < minBill) minBill = emp[i][1];
    }
    std::vector<int> output = {minPool, minBill};
    return output;
}

std::vector<int> maxVal(std::vector<std::vector<int>> emp) {
    int maxPool = emp[0][0], maxBill = emp[0][1];
    for (int i = 1; i < emp.size(); i++) {
        if (emp[i][0] > maxPool) maxPool = emp[i][0];
        if (emp[i][1] > maxBill) maxBill = emp[i][1];
    }
    std::vector<int> output = {maxPool, maxBill};
    return output;
}

int main() {
//2:46
    unsigned numEmployees = 0;
    std::cin >> numEmployees;
    std::vector<std::vector<int>> employees;
    for (int i = 0; i < numEmployees; i++) {
        int pool = 0, bill = 0;
        std::cin >> pool >> bill;
        std::vector<int> temp;
        temp.push_back(pool);
        temp.push_back(bill);
        employees.push_back(temp);
    }
    if (numEmployees % 2 == 1) {
    std::cout << "impossible" << '\n';
    return 0;
}
    // calculate max / min score for either/both because we need to match each individually to match both anyhow. good approach
    int scorePool = minVal(employees)[0] + maxVal(employees)[0]; //desired target score for pool (first col)
    int scoreBill = minVal(employees)[1] + maxVal(employees)[1]; //desired target scores for bill (sec col)
    //idea: calculate for both sorted by both - two sort vectors
    auto poolSynergy = employees, billSynergy = employees;
    std::sort(poolSynergy.begin(), poolSynergy.end());
    std::sort(billSynergy.begin(), billSynergy.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] < b[1]; // Sort based on the second element
    });
    //confirm that sort is correct

    int i = 0;
    bool poolFlag = false, billFlag = false;
    while (numEmployees - i > 2) {
        if ((poolFlag) || (poolSynergy[i][0] + poolSynergy[numEmployees - 1 - i][0] != scorePool) ||
        (poolSynergy[i][1] + poolSynergy[numEmployees - 1 - i][1] != scoreBill)) {
            // std::cout << "threw poolFlag at i = " << i << '\n';
            poolFlag = true;
        }

        if ((billFlag) || (billSynergy[i][0] + billSynergy[numEmployees - 1 - i][0] != scorePool) ||
        (billSynergy[i][1] + billSynergy[numEmployees - 1 - i][1] != scoreBill)) {
            // std::cout << "threw billFlag at i = " << i << '\n';
            billFlag = true;
        }
        i++;
    }
    if (billFlag && poolFlag) {
        std::cout << "impossible" << '\n';
        return 0;
    }
    std::cout << "possible" << '\n';
    return 0;

}