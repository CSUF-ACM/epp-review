// Stack Data Structure
// Email Oscar Olazabal at omolazabal@csu.fullerton.edu if you have any
// questions or concerns about this file.

#ifndef STACK_H
#define STACK_H


template <typename E>
class Stack;

template <typename E>
class SNode {
    E data;
    SNode<E>* next = nullptr;
    friend class Stack<E>;
    SNode() : next(nullptr) {}
};


template <typename E>
class Stack {
public:
    Stack();
    ~Stack();
    int size();
    bool is_empty();
    bool push(const E &);
    bool pop();
    bool top(E &);

private:
    SNode<E>* head_;  // Pointer to front of the list.
    int num_of_nodes_;
};


template <typename E>
Stack<E>::Stack() {
    head_ = nullptr;
    num_of_nodes_ = 0;
}

template <typename E>
Stack<E>::~Stack() {
    while (!is_empty())
        pop();
}

template <typename E>
int Stack<E>::size() {
    return num_of_nodes_;
}

template <typename E>
bool Stack<E>::is_empty() {
    // Return true if there are nodes in the list, else return false.
    return num_of_nodes_ == 0;
}

template <typename E>
bool Stack<E>::push(const E &kElement) {
    // Add a new element to the front of the list.
    SNode<E>* new_node = new SNode<E>;
    if (new_node == nullptr)
        return false;
    new_node->data = kElement;
    new_node->next = head_;
    head_ = new_node;
    num_of_nodes_++;
    return true;
}

template <typename E>
bool Stack<E>::pop() {
    // Remove the front element of the list.
    if (is_empty())
        return false;
    SNode<E>* front = head_;
    head_ = head_->next;
    delete front;
    front = nullptr;
    num_of_nodes_--;
    return true;
}

template <typename E>
bool Stack<E>::top(E &element) {
    // Return the front element of the list.
    if (is_empty())
        return false;
    element = head_->data;
    return true;
}

#endif
