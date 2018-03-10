#include "lbiguint.h"
#include "node.h"

#include <cassert>
#include <sstream>

 lbiguint::lbiguint(){
    head = tail = new node(0,nullptr);
 }

 lbiguint::lbiguint (const std::string & s)
 {
   if (s.length() == 0)
   {
       head = tail = nullptr;
       return;
   }
   head = tail = new node(s[0] - '0', nullptr);
   for (int i = 1; i < s.length(); ++i)
    {
         assert(isdigit(s[i]));
         head = new node(s[i] - '0', head);
   }

 }
 lbiguint::~lbiguint()
 {
     node * temp = head;
     while (temp != nullptr)
     {
         temp = temp->link();
         delete temp;
     }
     head = tail = nullptr;
 }


 node::value_type lbiguint::operator [](std::size_t pos) const
 {
     node * temp = head;
     std::size_t counter(0);
     while (!((temp == nullptr) || (pos == counter)))
     {
         counter++;
         temp = temp->link();
     }
     if (temp == nullptr)
         return 0;
     return temp->data();
 }

 std::size_t lbiguint::size( ) const
 {
     node * temp = head;
     std::size_t counter(0);
     while (temp != nullptr)
     {
         counter++;
         temp = temp->link();
     }
     return counter;
 }

 std::ostream & operator << (std::ostream & os, const lbiguint & b)
 {

     for (int i = b.size() - 1; i > 0; --i)
     {
         os << b[i];
     }
     os << b[0]
     return os;
 }
