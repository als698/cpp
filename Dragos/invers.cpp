#include <iostream>

using namespace std;

int main() {
    int n, x = 0;
    cout << "n=";
    cin >> n;
    while (n != 0) {
        x = x * 10 + n % 10;
        n = n / 10;
    }
    cout << x << endl;
}
