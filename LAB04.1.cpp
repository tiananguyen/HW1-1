#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int die (int n);

int main() {
    srand(time(0));
    int n;

    cout << "How many sides does your die have?\n";
    cin >> n;
    cout << "You rolled a " << die(n) << "!\n";
    return 0;
}

int die (int n) {
    return (rand() % n) + 1;
}
