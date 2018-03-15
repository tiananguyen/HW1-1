#include<iostream>
#include<sstream>
using namespace std;

class Node {
public:
    typedef int value_type;
    Node(const value_type & = value_type(), Node * = nullptr);
    value_type data() const;
    Node * link();
    void set_data(const value_type &newdata_);
    void set_link(Node *new_link);
private:
    value_type _data;
    Node *  _link;
};

class LinkedList{
public:
  void insert(int num);
  void reverse();
  void print();
private:
  Node* list;
  Node* head;
  Node* tail;
};

int main(){
  LinkedList a, b;
  cout<<"Here it is normally: "<<endl;
  a.insert(10);
  a.insert(40);
  a.insert(6);
  a.insert(3);
  a.insert(34);
  a.print();
  cout<<"Here it is reversed: "<<endl;
  a.reverse();
  a.print();

  return 0;
}

// Node Class
// Creates data and link
Node::Node(const value_type & init_data, Node * init_link) {
    _data = init_data;
    _link = init_link;
}
// Returns data value from private
Node::value_type Node::data() const {
    return _data;
}
// Returns link value
Node * Node::link() {
    return _link;
}
// Sets data to a value
void Node::set_data(const value_type & new_data) {
    _data = new_data;
}
// Sets link to a value
void Node::set_link(Node * new_link) {
    _link = new_link;
}

// LinkedList Class
void LinkedList::insert(int num){
  head = new Node(num, head);
}
// Reverse the linked list
void LinkedList::reverse(Node* head){
  Node* previous = nullptr;
  Node* current = head;
  Node* next = head->link();
  while(current!=nullptr){
    current->set_link(previous); // A link is created from current to prev
    previous = current; // prev value = current value
    current = next; // current value = next value
    if(current!=nullptr){ // For no segmentation fault errors
      next = next->link(); // next = value of next node
    }
  }
  head = previous;
}
// Print linkedlist
void LinkedList::print(){
  for(Node *p = head; p != nullptr; p = p->link()){
    cout<<p->data()<<endl;
  }
}
