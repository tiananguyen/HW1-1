/* Given two strings A and B, find the minimum number of times A has to be
 * repeated such that B is a substring of it. If no such solution, return -1.
 *
 * For example, with A = "abcd" and B = "cdabcdab". Return 3, because by
 * repeating A three times (“abcdabcdabcd”), B is a substring
 * of it; and B is not a substring of A repeated two times ("abcdabcd").
 *
 * Note:
 * The length of A and B will be between 1 and 10000.
 */

#include<iostream>
#include<string>
using namespace std;

int main() {
  int moves=0;
  string strA, strB;

  //Ask user for input
  cout<<"Enter the string A: "<<endl;
  cin>>strA;
  cout<<"Enter the substring B: "<<endl;
  cin>>strB;

  while(1) {
      // Find the first index of the string
      int index = strA.find(strB);
      // If the first index isn't found, then it breaks out of the program
      if (index == -1) {
          break;
      /* If the first index is found, then delete the substring,increment
      the number of moves, and continue */
      } else {
          strA.erase(index,strB.length());
          moves++;
      }
  }

  cout<<"The amount of moves it takes is: "<<moves<<endl;

  return 0;
}
