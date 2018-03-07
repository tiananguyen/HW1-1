#ifndef NODE_H
#define NODE_H

class node
{
public:

    typedef int value_type;

    // pre: none
    // post: creates a new node with given data and link values
    //       defaults: 0 and nullptr
    node(const value_type & = value_type(),//value_type() requires C++11
         node * = nullptr);

    // pre: none
    // post: returns data value stored in this node
    value_type data() const;

    // pre: none
    // post: returns link value stored in this node
    node * link();

    // pre: none
    // post: sets the data field to given value
    void set_data(const value_type &);

    // pre: none
    // post: sets the link field to given value
    void set_link(node *);


private:
    value_type _data;
    node *   _link;
    // invariants:
    //  _data holds the data value stored in this node
    //  _link holds the address of the next node
};

// std::size_t list_index(node* head_ptr, int target);
//
// node* list_at(node* head_ptr, std::size_t n);

#endif // NODE_H
