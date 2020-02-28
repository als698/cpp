#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));

    int random = rand() % 10;

    int x = 0, n;
    cout << "n=";
    cin >> n;
    if (n == random) {
        x = x + 1;
        cout << "Ai ghicitt" << endl;
    } else {
        x = x + 1;
        cout << "Nu ai nimerit" << endl;
    }
    while (x < 7 && n != random) {
        cin >> n;
        x = x + 1;
        if (n == random) {
            cout << "Ai ghicit" << endl;
            cout << "GAME OVER";
        } else {
            cout << "Nu ai ghicit" << endl;
        }
    }

    if (x == 7) {
        cout << "GAME OVER" << endl;
    }
}
