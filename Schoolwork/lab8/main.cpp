#include<iostream>
#include"node.h"
#include"node.cpp"

std::size_t list_index(node* head_ptr, int target){
  std::size_t count = 0;
  for(node *p = head_ptr; p != nullptr; p = p->link()){
    if(p->data() == target){
      return count;
    }
    count++;
  }
}

node* list_at(node* head_ptr, std::size_t n){
  for(node *p = head_ptr; p != nullptr; p = p->link()){
    if(p->data() == n){
      return p;
    }
  }
}

int main(){
  node *head = new node(4, nullptr);
  node *tail(head);
  node *temp;
  temp = new node(1, nullptr);
  tail->set_link(temp);
  tail = temp;
  head = new node(1, head);
  head = new node(3, head);
  temp = new node(5, nullptr);
  tail->set_link(temp);
  tail = temp;
  for (node *p = head; p != nullptr; p = p->link()){
    std::cout << p->data() << " ";
  }
  std::cout << std::endl;

  std::size_t a= list_index(head,4);
  std::cout<<a<<std::endl;

  std::cout<<list_at(head,3)<<std::endl;

  return 0;
}
