
// PROBLEM : Abbreviate all middle initials of a full name

#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

string answer(const string &name);

int main() {
  // TEST VALUE
  string name = "Maria Fong Ju Chu";

  // Output
  cout << "Here is the abbreviated name: " << endl;
  cout << answer(name) << endl;

  return 0;
}

string answer(const string &name) {
    int spaces = 0;
    int newSpaces = 0;
    string newName = "";

    // Count how many spaces there are in the string
    for(int i = 0; i < name.length(); i++) {
        if(name[i] == ' ') {
            spaces++;
        }
    }

    // If there is only one space, print out the name
    if(spaces == 1) {
        return name;
    } else {
        // Loop through the array to create the new name
        for(int i = 0; i < name.length(); i++) {
            // Make sure to get the first full name and last name
            if(newSpaces == 0 || spaces == 0) {
              newName += name[i];
            }
            if(name[i] == ' ' && spaces == 1) {
              newName += ' ';
              spaces--;
            }

            // Create the abbreviations
            if(spaces > 1 && name[i] == ' ') {
                newSpaces++;
                newName += name[i];
                newName += name[i+1];
                newName += '.';
                spaces--;
            }
        }
    }

    return newName;
}
