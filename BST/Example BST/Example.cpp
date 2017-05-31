#include <iostream>
#include "Tree.h"

using namespace std;

int main() {
	Tree<int> intTree;	// Creates an empty BST of data type int

	if (intTree.insert(1))	// inserts 1 into intTree
		cout << 1 << " successfully inserted.\n";
	else
		cout << "failed to insert " << 1 << endl;

	if (intTree.insert(2))	// inserts 2 into intTree
		cout << 2 << " successfully inserted.\n";
	else
		cout << "failed to insert " << 2 << endl;

	cout << "Values:\n";
	intTree.print(cout, inorder);   // Prints the values in the tree inorder

	int retrievedNumber;

	if (intTree.retrieve(1, retrievedNumber))	// recievedNumber is assigned the value if it exists in the tree
		cout << retrievedNumber << " retrieved.\n";
	else
		cout << "Value does not exist.\n";

	if (intTree.deleteInfo(1))	// finds and deleted 1 from the tree if it is found
		cout << 1 << " deleted from tree.\n";
	else
		cout << 1 << " not found.\n";

	if (intTree.isEmpty())	// Checks if tree is empty
		cout << "Tree is empty.\n";
	else
		cout << "Tree is not empty.\n";

	intTree.makeEmpty();	// Empties intTree
}