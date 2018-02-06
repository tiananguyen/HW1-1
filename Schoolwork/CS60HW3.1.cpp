#include<iostream>
#include<cstring>
using namespace std;

int main() {
  int end, begin;
  char *head, *tail;
  begin = 0;

  // Ask user for word coungt and word
  cout<<"How many letters are in your word?"<<endl;
  cin>>end;
  char str[end];
  cout<<"Type your "<<end<<" letter word: "<<endl;
  for(int i=0; i<end;i++){
    cin>>str[i];
  }

  // Set tail to the last char and head to the first char
  head = new char;
  tail = new char;
  tail = &str[end-1];
  head = &str[begin];
  int length = end/2;

  // Reverse word
  while (head != tail) {
      char temp = *tail;
      *tail = *head;
      *head = temp;

      head++;
      if (head == tail) {
        break;
      }
      tail--;
  }

  for (int i = 0; i < end; i++) {
    cout << str[i];
  }
  cout << endl;

  return 0;
}
