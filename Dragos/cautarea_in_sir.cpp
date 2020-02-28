#include <iostream>

using namespace std;

int main() {
    int n, a, gasit = 0;
    cout << "n=";
    cin >> n;
    while (a != 0) {
        if (n == a) {
            gasit = 1;
        }
        cin >> a;
        cout << a << endl;
    }

    if (gasit == 1) {
        cout << "L-am gasit";
    } else {
        cout << "Nu l-am gasit";
    }
}