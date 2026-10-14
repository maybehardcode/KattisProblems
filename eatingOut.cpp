#include <iostream>
using namespace std;
int main() {

    int m, a, b, c;
    cin >> m >> a >> b >> c;
    if (a+b+c > m) cout << "impossible\n";
    else cout << "possible\n";
    return 0;
}