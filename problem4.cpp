#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 50 == 0) cout << 0;
    else cout << 50 - (n % 50);
    return 0;
}
