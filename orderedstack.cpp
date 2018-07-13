/* PROBLEM
 * Write a program to sort a stack in ascending order (with biggest items on
 * top). You may use at most one additional stack to hold items, but you may not
 * copy the elements into any other data structure (such as an array). The stack
 * supports the following operations: push, pop, peek, and isEmpty.
 *
 * SOLUTION
 * 1. Create 2 stacks (1 holding the numbers and one empty that will be the
 * final ordered stack)
 * 2. If the top element of unordered stack is smaller than the top element of
 * ordered stack :
 *  A. Pop the element in unordered stack and put it as a temp variable.
 *  B. Pop elements from ordered stack until the top element is smaller than
 *  the temp variable
 *  C. Push temp variable into the ordered stack and pop the elemtns from the
 *  unordered stack
 */

#include<iostream>
#include<stack>
using namespace std;

int main() {
  stack<int> unordered;
  stack<int> ordered;
  int temp, userNum;
  char answer;

  // Ask for user input to fill in the stack
  do {
    cout<<"Enter a number to put into the stack"<<endl;
    cin>>userNum;
    unordered.push(userNum);
    cout<<"Would you like to enter another number?"<<endl;
    cin>>answer;
  } while(answer == 'y' || answer == 'Y');

  // Order the stack
  // Put initial value into ordered stack
  ordered.push(unordered.top());
  unordered.pop();

  // Pop from unordered stack and push into ordered stack
  while(!unordered.empty()) {
    temp = unordered.top();
    unordered.pop();
    if(temp > ordered.top()) {
      ordered.push(temp);
    } else {
      while(!ordered.empty() && ordered.top() > temp) {
        unordered.push(ordered.top());
        ordered.pop();
      }
      ordered.push(temp);
    }
  }

  // Print out ordered stack
  cout<<"Here is the ordered stack: "<<endl;
  while(!ordered.empty()) {
    cout<<ordered.top()<<" ";
    ordered.pop();
  }
  cout<<endl;

  return 0;
}
