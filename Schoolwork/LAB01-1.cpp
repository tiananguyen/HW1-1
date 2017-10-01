#include <iostream>
#include <string>
using namespace std;

int main() {

  string parentGenotype1, parentGenotype2;
  cout << "What is the genotype for the first parent? \n";
  cin >> parentGenotype1;

  cout << "What is the genotype for the second parent? \n";
  cin >> parentGenotype2;

  if ((parentGenotype1 == "GG") && (parentGenotype2 == "GG")) {
    cout << "GG: 100%, Gg: 0%, gg: 0% \n";
  } else if (((parentGenotype1 == "Gg") && (parentGenotype2 == "GG")) || ((parentGenotype1 == "GG") && (parentGenotype2 == "Gg"))) {
    cout << "GG: 50%, Gg: 50%, gg: 0% \n";
  } else if ((parentGenotype1 == "Gg") && (parentGenotype2 == "Gg")) {
    cout << "GG: 25%, Gg: 50%, gg: 25% \n";
  } else if ((parentGenotype1 == "gg") && (parentGenotype2 == "Gg")) {
    cout << "GG: 0%, Gg: 50%, gg: 50% \n";
  } else if ((parentGenotype1 == "gg") && (parentGenotype2 == "gg")) {
    cout << "GG: 0%, Gg: 0%, gg: 100% \n";
  } else if ((parentGenotype1 == "Gg") && (parentGenotype2 == "gg")) {
    cout << "GG: 0%, Gg: 50%, gg: 50% \n";
  } else {
    cout << "Error.";
  }
}
