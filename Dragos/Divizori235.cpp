#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "n=";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " Se impare la 2";
    }
    if (n % 3 == 0) {
        cout << n << " Se imparte la 3";
    }
    if (n % 5 == 0) {
        cout << n << " Se imparte la 5";
    }
}
