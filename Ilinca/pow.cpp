#include <iostream>

using namespace std;

int main() {
    int i, a, m, p = 1;
    cin >> a >> m;
    for (i = 1; i <= m; i++) {
        p = p * a;
    }

    cout << p;
}