// Queue Data Structure
// Email Oscar Olazabal at omolazabal@csu.fullerton.edu if you have any
// questions or concerns about this file.

#ifndef QUEUE_H
#define QUEUE_H


template <typename E>
class Queue;

template <typename E>
class QNode {
    E data;
    QNode<E>* next;
    QNode<E>* prev;
    friend class Queue<E>;
    QNode() : next(nullptr), prev(nullptr) {}
};


template <typename E>
class Queue {
public:
    Queue();
    ~Queue();
    int size();
    bool is_empty();
    bool dequeue();
    bool enqueue(const E &);
    bool get_front(E &);
    bool get_back(E &);

private:
    QNode<E>* header_;   // Pointer to the front of the list
    QNode<E>* trailer_;  // Pointer to the end of the list
    int num_of_nodes_;
    bool insert_helper(QNode<E>*, const E &);
    void remove_helper(QNode<E>* &);
};

template <typename E>
Queue<E>::Queue() {
    // Initialize sentinel nodes.
    header_ = new QNode<E>;
    trailer_ = new QNode<E>;
    header_->next = trailer_;
    trailer_->prev = header_;
    num_of_nodes_ = 0;
}

template <typename E>
Queue<E>::~Queue() {
    // Delete all nodes, including sentinels.
    while (!is_empty())
        dequeue();
    delete header_;
    delete trailer_;
}

template <typename E>
int Queue<E>::size() {
    return num_of_nodes_;
}

template <typename E>
bool Queue<E>::is_empty() {
    // Return true if list is empty, else return false.
    return num_of_nodes_ == 0;
}

template <typename E>
bool Queue<E>::dequeue() {
    // Call to remove_helper to remove element after header.
    if (is_empty())
        return false;
    QNode<E>* to_remove = header_->next;
    remove_helper(to_remove);
    return true;
}

template <typename E>
void Queue<E>::remove_helper(QNode<E>* &to_remove) {
    // Delete the node that to_remove points to and link the nodes that are
    // its predecessor and successor.
    QNode<E>* predecessor = to_remove->prev;
    QNode<E>* successor = to_remove->next;
    predecessor->next = successor;
    successor->prev = predecessor;
    delete to_remove;
    to_remove = nullptr;
    num_of_nodes_--;
}

template <typename E>
bool Queue<E>::enqueue(const E &kElement) {
    // Call to insert_helper to insert element before trailer.
    return insert_helper(trailer_->prev, kElement);
}

template <typename E>
bool Queue<E>::insert_helper(QNode<E>* predecessor, const E &kElement) {
    // Allocate a new node and link it between its predecessor node (the one
    // passed in) and its successor node.
    QNode<E>* new_node = new QNode<E>;
    if (new_node == nullptr)
        return false;
    new_node->data = kElement;
    QNode<E>* successor = predecessor->next;
    predecessor->next = new_node;
    successor->prev = new_node;
    new_node->next = successor;
    new_node->prev = predecessor;
    num_of_nodes_++;
    return true;
}

template <typename E>
bool Queue<E>::get_front(E &element) {
    // Aquire the front element.
    if (is_empty())
        return false;
    element = header_->next->data;
    return true;
}

template <typename E>
bool Queue<E>::get_back(E &element) {
    // Aquire the back element.
    if (is_empty())
        return false;
    element = trailer_->prev->data;
    return true;
}

#endif
