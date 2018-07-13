/* PROBLEM
 * Write a function that takes a single argument (a list of names)
 *  and returns a string representing the English-formatted
 * conjunction of those names.
 * EXAMPLE : given these names: ['Alice', 'Bob', 'Carlos', 'Diana']
 * The output would be: "Alice, Bob, Carlos and Diana"
 *
 * This type of function is useful when building user interfaces that show the
 * list of people in a conversation, for example.
 * Whether or not the output follows the Oxford comma rule is up to the author.
 */

#include<iostream>
#include<list>
using namespace std;

void formatNames(list<string> names, int amountNames);

int main() {
  int amountNames;
  int count = 0;
  string initname ="";
  list<string> names;

  // Ask user for amount of names
  cout<<"How many names would you like to insert?"<<endl;
  cin>>amountNames;

  // Insert names
  do {
    cout<<"Please enter the name: "<<endl;
    cin>>initname;
    names.push_back(initname);
    count++;
    initname = "";
  } while(count < amountNames);

  // Print out list
  cout<<"Here are the names: "<<endl;
  for (list<string>::iterator i = names.begin(); i != names.end(); i++) {
     cout<< *i <<endl;
  }

  // Function to format names
  cout<<"Here are the names formatted: "<<endl;
  formatNames(names, amountNames);

  return 0;
}

void formatNames(list<string> names, int amountNames) {
  // EDGE CASE #1 : No Names
  if(amountNames == 0){
    cout<<"There are no names"<<endl;
  // EDGE CASE #2 : 1 Name
  } else if (amountNames == 1) {
    for (list<string>::iterator i = names.begin(); i != names.end(); i++) {
       cout << *i <<endl;
     }
  // GENERAL CASE
  } else {
    int count = 0;
    for (list<string>::iterator i = names.begin(); i != names.end(); i++) {
      count ++;
      if(count == amountNames-1) {
        cout<< *i << ", and ";
      } else if (count == amountNames) {
        cout<< *i <<endl;
      } else {
       cout << *i << ", ";
     }
    }
  }
}
