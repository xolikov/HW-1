#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    if (y * 30.48 > x) cout << 1;
    else cout << 0;
    return 0;
}
