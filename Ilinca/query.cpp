#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int random;
    random = rand() % 10 % 5;
    if (random == 0)
        cout << "Gandeste-te bine!!";
    else if (random == 1)
        cout << "Ai sanse destul de mari!";
    else if (random == 2)
        cout << "Incearca alta data!";
    else if (random == 3)
        cout << "Opreste muzica!!";
    else if (random == 4)
        cout << "mai gandeste-te odata!";
}