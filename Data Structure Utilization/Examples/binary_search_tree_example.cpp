
#include <iostream>
#include "binary_search_tree.h"

using namespace std;

int main() {
    // Create an empty BST of data type int.
    BinarySearchTree<int> intTree;

    // Insert 2 into intTree.
    if (intTree.insert(2))
        cout << 2 << " successfully inserted.\n";
    else
        cout << "failed to insert " << 2 << endl;

    // Insert 1 into intTree.
    if (intTree.insert(1))
        cout << 1 << " successfully inserted.\n";
    else
        cout << "failed to insert " << 1 << endl;

   // Insert 3 into intTree.
    if (intTree.insert(3))
        cout << 3 << " successfully inserted.\n";
    else
        cout << "failed to insert " << 3 << endl;

    // Print the values in the tree (inorder).
    cout << "Values (inorder): ";
    intTree.print(INORDER);
    cout << endl;

    // Retrieve a value from the tree.
    int retrievedNumber;
    if (intTree.retrieve(1, retrievedNumber))
        cout << retrievedNumber << " retrieved.\n";
    else
        cout << "Value does not exist.\n";

    // Remove a value from the tree.
    if (intTree.remove(2))
        cout << 2 << " deleted from tree.\n";
    else
        cout << 2 << " not found.\n";

    // Check if tree is empty.
    if (intTree.is_empty())
        cout << "Tree is empty.\n";
    else
        cout << "Tree is not empty.\n";

    // Print the values in the tree (inorder).
    cout << "Values (inorder): ";
    intTree.print(INORDER);
    cout << endl;


    // Empty the tree.
    cout << "Emptying tree.\n";
    intTree.remove_all();

    // Print the values in the tree (inorder).
    cout << "Values (inorder): ";
    intTree.print(INORDER);
    cout << endl;


}
