#include <math.h>
#include <iostream>
using namespace std;

int main() {
    int i, n, nota, p = 1;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> nota;
        p = p * nota;
    }

    cout << sqrt(p);
}