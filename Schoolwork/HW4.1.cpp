#include<iostream>

/* Write code that causes a "triangle" of asterisks to be output to the screen, i.e., n lines should
be printed out, the first consisting of a single asterisk, the second consisting of two asterisks, the
third consisting of three, etc. The last line should consist of n asterisks. */

using namespace std;
main() {
  int n;
  int i;
  for (i=1; i<=n; i++){
	   for (j=1; j<=i; j++){
		   cout << "*";
	   }
	   cout << endl;
  }
}
