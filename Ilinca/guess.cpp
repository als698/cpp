#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int random, tries = 1, nr = 0;
    random = rand() % 10;
    cin >> nr;
    while (nr != random && tries != 7) {
        cout << "Mai incearca\n";
        cin >> nr;
        tries++;
    }
    if (nr == random)
        cout << "Felicitari\n";
    if (tries == 7) cout << "Game Over";
}