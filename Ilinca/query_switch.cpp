#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int random;
    random = rand() % 10 % 5;
    switch (random) {
        case 0:
            cout << "Gandeste-te bine!!";
            break;
        case 1:
            cout << "Ai sanse destul de mari!";
            break;
        case 2:
            cout << "Incearca alta data!";
            break;
        case 3:
            cout << "Opreste muzica!!";
            break;
        case 4:
            cout << "mai gandeste-te odata!";
            break;
    }
}