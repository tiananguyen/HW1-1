/*
 * PROBLEM : Find the amount of characters that are the same consecutively
 */

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
vector<string> words;
vector<int> minimumChar;
int num = 0;
int minNum = 0;

// TEST CASES
words.push_back("aab");
words.push_back("baaabb");

// Loop through to find the minimum operations
for(int i = 0; i < words.size(); i++) {
    for(int j = 0; j < words[i].length(); j++) {
        // If two consecutive characters are the same, delete one
        if(words[i][j] == words[i][j+1]) {
            words[i].erase(j,1);
            num++;
        }
    }
    // Add to the amount of characters needed to be deleted
    minimumChar.push_back(num);
    num = 0;
}

// Output minimum characters
cout << "Here are the minimum amount of characters to be removed per word: " <<endl;
vector<int>::iterator it;
for (it = minimumChar.begin(); it != minimumChar.end(); it++){
        cout << *it << endl;
}

return 0;

}
