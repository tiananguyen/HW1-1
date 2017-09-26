#include <iostream>

/*Write an if/else statement that adds 1 to the variable minors if the variable age is less than 18,
adds 1 to the variable adults if age is 18 through 64, and adds 1 to the variable seniors if age is 65 or older.*/

int main() {
    int minors;
    int age;
    int adults;
    int seniors;

    if(age < 18) {
        minors++;
    } else if(age >= 18 && age <= 64) {
        adults++;
    } else {
        seniors++;
    }
    return 0;
}
