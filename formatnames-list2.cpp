/* PROBLEM
 * Same as formatnames-list.cpp, but this time the function should return a
 * the formatted names as a string.
 */

#include<iostream>
#include<list>
using namespace std;

string formatNames(list<string> names, int amountNames);

int main() {
  int amountNames, count = 0;
  string initname = "";
  string finalName;
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
  finalName = formatNames(names, amountNames);
  cout<<"Here are the names formatted: "<<finalName<<endl;

  return 0;
}

string formatNames(list<string> names, int amountNames) {
  string formattedNames = "";
  // EDGE CASE #1 : No Names
  if(amountNames == 0){
    return "There are no names";
  // EDGE CASE #2 : 1 Name
  } else if (amountNames == 1) {
    for (list<string>::iterator i = names.begin(); i != names.end(); i++) {
       formattedNames = *i;
       return formattedNames;
     }
  // GENERAL CASE
  } else {
    int count = 0;
    for (list<string>::iterator i = names.begin(); i != names.end(); i++) {
      count ++;
      if(count == amountNames-1) {
        formattedNames += *i + ", and ";
      } else if (count == amountNames) {
        formattedNames += *i;
      } else {
       formattedNames += *i + ", ";
     }
    }
    return formattedNames;
  }
  return "";
}
