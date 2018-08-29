/*
 * PROBLEM : Check if the brackets are placed in the correct order
 */

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
  vector<string> values;
  vector<string> result;
  string ans = "";
  char topBrace;
  std::stack<char> brace;

  // TEST VALUES. CAN REPLACE
  values.push_back("{}");

  // Loop through to find if the braces are in the correct order
  for(int i = 0; i < values.size(); i++) {
      for(int j = 0; j < values[i].length(); j++) {
          // Push the beginning braces into the stack
          if(values[i][j] == '{' || values[i][j] == '[' || values[i][j] == '(') {
              brace.push(values[i][j]);
          // Pop the beginning braces out of the stack and compare to the end braces to see if it matches
        } else if((values[i][j] == '}' || values[i][j] == ']' || values[i][j] == ')')
          && !brace.empty()) {
              topBrace = brace.top();
              brace.pop();
              if((topBrace == '{' && values[i][j] == '}') || (topBrace == '('
              && values[i][j] == ')') || (topBrace == '[' && values[i][j] == ']')) {
                  ans = "YES";
              } else {
                  ans = "NO";
              }
          }
      }
      result.push_back(ans);
  }

  vector<string>::iterator it;
  for (it = result.begin(); it != result.end(); it++){
          cout << *it << " ";
  }
  cout<<endl;

   return 0;
}
