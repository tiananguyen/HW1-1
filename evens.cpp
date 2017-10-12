/*Write a function int evens_between(int n, int m) that returns the number
of even numbers in between n and m (inclusive) */

#include <iostream>
using namespace std;

int evens_between (int n, int m);
bool is_even (int n);

int main () {
    int n, m;

    cout << "Enter the first number of the range.\n";
    cin >> n;
    cout << "Enter the last number of the range.\n";
    cin >> m;

    cout << "You have " << evens_between (n, m) << " even numbers." <<endl;
    return 0;
}

int evens_between (int n, int m) {
    int numberEven;
    for (int n; n <= m; n++) {
        if (is_even(n) == 1) {
            numberEven++;
        } else {
        }
    }
    return numberEven;
}

bool is_even (int n) {
     if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
