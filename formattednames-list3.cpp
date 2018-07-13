/* PROBLEM
 * We iterate on the problem by adding another argument to our function.
 * Now lets add a new argument called `limit`. This controls the maximum number of
 * names that should be displayed. Any remaining items are "summarized" using the
 * string "and # more".
 *
 * For example, given these names: ['Alice', 'Bob', 'Carlos', 'Diana'] and limit: 2
 * The output would be: "Alice, Bob and 2 more"
 */

#include<iostream>
#include<list>
using namespace std;

string formatNames(list<string> names, int amountNames, int limit);

int main() {
  int amountNames, limit, count = 0;
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

  // Ask for limit on names
  cout<<"What is your limit on names?"<<endl;
  cin>>limit;

  // Function to format names
  finalName = formatNames(names, amountNames, limit);
  cout<<"Here are the names formatted: "<<finalName<<endl;

  return 0;
}

string formatNames(list<string> names, int amountNames, int limit) {
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
    int more = amountNames - limit;
    string moreString = to_string(more);
    for (list<string>::iterator i = names.begin(); i != names.end(); i++) {
      count ++;
      if(count == limit) {
        formattedNames += *i + ", and " + moreString + " more";
        break;
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
