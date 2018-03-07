#include "node.h"

node::node(const value_type & init_data, node * init_link)
{

    _data = init_data;
    _link = init_link;
}

node::value_type node::data() const
{
    return _data;
}

node * node::link()
{
    return _link;
}

void node::set_data(const value_type & new_data)
{
    _data = new_data;
}

void node::set_link(node * new_link)
{
    _link = new_link;
}

// std::size_t list_index(node* head_ptr, int target){
//   std::size_t count = 0;
//   for(node *p = head_ptr; p != nullptr; p = p->link()){
//     if(p->data() == target){
//       return count;
//     }
//     count++;
//   }
// }
//
// node* list_at(node* head_ptr, std::size_t n){
//   for(node *p = head_ptr; p != nullptr; p = p->link()){
//     if(p->data() == n){
//       return p;
//     }
//   }
// }


/*
 *
const node * node::link() const
{
    return _link;
}
*/
