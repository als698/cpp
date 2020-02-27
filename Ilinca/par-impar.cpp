#include <iostream>

using namespace std;

int main() {
    int x, p = 0, i = 0;
    cin >> x;
    while (x > 0) {
        if (x % 10 % 2 == 0)
            p = p + 1;
        else
            i = i + 1;
        x = x / 10;
    }
    cout << p << endl
         << i;
}