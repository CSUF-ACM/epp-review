// Binary Search Tree Data Structure
// Email Oscar Olazabal at omolazabal@csu.fullerton.edu if you have any
// questions or concerns about this file.

#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iostream>

using std::cout;


enum traversal_order {PREORDER, INORDER, POSTORDER};


template <typename E>
class BinarySearchTree;

template <typename E>
class BNode {
    E data;
    BNode<E>* left;
    BNode<E>* right;
    friend class BinarySearchTree<E>;
    BNode() : left(nullptr), right(nullptr) {}
};


template <typename E>
class BinarySearchTree {
public:
    BinarySearchTree();
    ~BinarySearchTree();
    int size();
    bool is_empty();
    bool insert(const E &);
    bool remove(const E &);
    bool retrieve(const E &, E&);
    bool remove_all();
    void print(traversal_order);

private:
    BNode<E>* root_;
    int num_of_nodes_;

    // Helper functions to perform recursion.
    int height_helper(BNode<E>*);
    bool insert_helper(BNode<E>* &, const E &);
    bool remove_helper(BNode<E>* &, const E &);
    void remove_node(BNode<E>* &);
    bool retrieve_helper(BNode<E>* &, const E &, E &);
    void print_helper(BNode<E>*, traversal_order);
    void remove_all_helper(BNode<E>* &);

    bool is_leaf_node(BNode<E>*);      // Check if node it a leaf node.
    bool only_one_child(BNode<E>*);    // Check if node has only one child node.
    BNode<E>* get_min_ptr(BNode<E>*);  // Find the pointer that points to the
                                       // minimum value.
};

template <typename E>
BinarySearchTree<E>::BinarySearchTree() {
    root_ = nullptr;
    num_of_nodes_ = 0;
}

template <typename E>
BinarySearchTree<E>::~BinarySearchTree() {
    remove_all_helper(root_);
}

template <typename E>
int BinarySearchTree<E>::size() {
    return num_of_nodes_;
}

template <typename E>
bool BinarySearchTree<E>::is_empty() {
    // Return true if tree is empty, else false.
    return root_ == nullptr;
}

template <typename E>
bool BinarySearchTree<E>::insert(const E &kElement) {
    // Insert an element. Call to insert helper.
    return insert_helper(root_, kElement);
}

template <typename E>
bool BinarySearchTree<E>::insert_helper(BNode<E>* &ptr, const E &kElement) {
    // Recursively traverse until you reach a leaf node's child node (nullptr). Once
    // reached, allocate a new node and replace the nullptr to point to that new node.

    if (ptr == nullptr) {
        // Add new node to tree.
        BNode<E>* new_node = new BNode<E>;
        new_node->data = kElement;
        ptr = new_node;
        num_of_nodes_++;
        return true;
    }

    // Traverse
    if (kElement < ptr->data)
        return insert_helper(ptr->left, kElement);
    else if (kElement > ptr->data)
        return insert_helper(ptr->right, kElement);
    else // if (kElement == ptr->data)
        return false;
}

template <typename E>
bool BinarySearchTree<E>::remove(const E &kElement) {
    // Remove an element. Call to remove helper.
    if (is_empty())
        return false;
    return remove_helper(root_, kElement);
};

template <typename E>
bool BinarySearchTree<E>::remove_helper(BNode<E>* &ptr, const E &kElement) {
    // Traverse ptr to the node that needs to be deleted.
    if (ptr == nullptr)
        return false;

    if (ptr->data == kElement) {
        num_of_nodes_--;
        remove_node(ptr);
        return true;
    }
    else if (kElement < ptr->data)
        return remove_helper(ptr->left, kElement);
    else // if (kElement > ptr->data)
        return remove_helper(ptr->right, kElement);
}

template <typename E>
void BinarySearchTree<E>::remove_node(BNode<E>* &ptr) {
    // Remove node that the passed in pointer points to. There are three cases
    // that have to be taken cared of: The node that needs to be removed (1) is
    // a leaf node, (2) has only one child, or (3) has two child nodes.

    if (is_leaf_node(ptr)) {
        // If leaf node, just delete.
        delete ptr;
        ptr = nullptr;
    }

    else if (only_one_child(ptr)) {
        // If node only has one child node then (depending on whether it is a right
        // child or left child) set the pointer to point to the child node and
        // delete the node that the pointer previously pointed to.

        if (ptr->left == nullptr) {
            // Change ptr to point to its right child and delete the node that it
            // previously pointed to.
            BNode<E>* to_remove = ptr;
            ptr = ptr->right;
            delete to_remove;
            to_remove = nullptr;
        }
        else if (ptr->right == nullptr) {
            // Preform the same as above but with opposite child.
            BNode<E>* to_remove = ptr;
            ptr = ptr->left;
            delete to_remove;
            to_remove = nullptr;
        }
    }

    // Case in which there are two children.
    else {
        // Find the minimum value of the subtree with ptr->right as root, then
        // replace ptr's data with the minimum value. Finally, delete the node that
        // originally had the minimum value.
        BNode<E>* min = get_min_ptr(ptr->right);
        ptr->data = min->data;
        remove_helper(ptr->right, min->data);
    }
}

template <typename E>
bool BinarySearchTree<E>::is_leaf_node(BNode<E>* ptr) {
    // Check if passed in pointer points to a leaf node.
    if (ptr->left == nullptr && ptr->right == nullptr)
        return true;
    return false;
}

template <typename E>
bool BinarySearchTree<E>::only_one_child(BNode<E>* ptr) {
    // Check if passed in pointer points to a node with only one child.
    if (ptr->left == nullptr && ptr->right != nullptr)
        return true;
    if (ptr->right == nullptr && ptr->left != nullptr)
        return true;
    return false;
}

template <typename E>
BNode<E>* BinarySearchTree<E>::get_min_ptr(BNode<E>* ptr) {
    // Traverse the passed in pointer to the minimum value of the tree/subtree.
    if (ptr->left == nullptr)
        return ptr;

    return get_min_ptr(ptr->left);
}

template <typename E>
bool BinarySearchTree<E>::retrieve(const E &kElement, E &retrieved_element) {
    // Retrieve the node's data that matches kElement. Call to retrieve_helper.
    if (is_empty())
        return false;
    return retrieve_helper(root_, kElement, retrieved_element);
}

template <typename E>
bool BinarySearchTree<E>::retrieve_helper(BNode<E>* &ptr, const E &kElement, E &retrieved_element) {
    // Traverse to the node the matches kElement. Returns that value.
    if (ptr == nullptr)
        return false;

    if (ptr->data == kElement) {
        retrieved_element = ptr->data;
        return true;
    }
    else if (kElement < ptr->data)
        return retrieve_helper(ptr->left, kElement, retrieved_element);
    else // if (kElement > ptr->data)
        return retrieve_helper(ptr->right, kElement, retrieved_element);
}

template <typename E>
bool BinarySearchTree<E>::remove_all() {
    // Remove all nodes from tree. Call to remove_helper.
    if (is_empty())
        return false;
    remove_all_helper(root_);
    return true;
}

template <typename E>
void BinarySearchTree<E>::remove_all_helper(BNode<E>* &ptr) {
    // Traverse the tree in POSTORDER order and removes the nodes one at a time.
    if (ptr == nullptr)
        return;

    remove_all_helper(ptr->left);
    remove_all_helper(ptr->right);
    delete ptr;
    ptr = nullptr;
    num_of_nodes_ = 0;
}

template <typename E>
void BinarySearchTree<E>::print(traversal_order order) {
    // Print values in the tree in the given order (preorder, inorder, or postorder).
    print_helper(root_, order);
    cout.flush();
}

template <typename E>
void BinarySearchTree<E>::print_helper(BNode<E>* ptr, traversal_order order) {
    // Perform preorder, inorder, or postorder traversal.
    if (ptr == nullptr)
        return;

    if (order == PREORDER) {
        cout << ptr->data;
        print_helper(ptr->left, PREORDER);
        print_helper(ptr->right, PREORDER);
    }
    else if (order == INORDER) {
        print_helper(ptr->left, INORDER);
        cout << ptr->data;
        print_helper(ptr->right, INORDER);
    }
    else if (order == POSTORDER) {
        print_helper(ptr->left, POSTORDER);
        print_helper(ptr->right, POSTORDER);
        cout << ptr->data;
    }
}

#endif
