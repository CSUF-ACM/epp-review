# Quick Notes #
- A binary search tree is an example of a dictionary
    - Find function:
    given a key, will return a value
    - Insert function:
    given a value, will insert the value into the tree
    - Erase:
    given a value, will remove the value
- Given a value, the value will be inserted at the end of the tree based on whether it is less 
than or greater than the nodes already in the tree
- If storing objects in the BST, make sure that the class has the <, >, ==, and << operators
overloaded
- Traversal types
  - Preorder
  
       ![](http://ceadserv1.nku.edu/longa//classes/mat385_resources/docs/traversal_files/PreOrderTrav.gif)

  - Inorder

       ![](http://ceadserv1.nku.edu/longa//classes/mat385_resources/docs/traversal_files/InorderTrav.gif)

  - Postorder

       ![](http://ceadserv1.nku.edu/longa//classes/mat385_resources/docs/traversal_files/PostorderTrav.gif)

Source: http://ceadserv1.nku.edu/longa//classes/mat385_resources/docs/traversal.htm

- - - -
- - - -

# BST Example #

### See "BinarySearchTree.h" and "TreeNode.h" ###
#### Node Class for BST ####
```C++
// Node Class's methods
template< class ItemType > class Tree;  // forward declarations

template<class ItemType>
class TreeNode {
   friend class Tree< ItemType >; // make Tree a friend
 
public:
   TreeNode( const ItemType & );  // constructor
   TreeNode();
   ItemType getInfo() const;      // return data in the node
private:
   ItemType info;                 
   TreeNode< ItemType > *leftPtr; 
   TreeNode< ItemType > *rightPtr;
};
```

#### Tree Class for BST ####
```C++
// Tree class's public methods
enum TraversalOrderType {preorder, inorder, postorder};  

template< class ItemType >
class Tree {
public:
   Tree();      // constructor
   ~Tree();     // destructor

   // Inserts a copy of Item. Returns false if it already exist in tree, else true.
   bool insert( const ItemType & );

   // Given an item, it retrieves it by settings the reference of the second item
   // equal to the found item. Returns true if found, else false
   bool retrieve( const ItemType &, ItemType & );

   // Given an item, if it find a match of that item in the tree it will remove it.
   // Returns true if item is found, else false
   bool deleteInfo( const ItemType & );

   // Returns true if tree is empty, else false
   bool isEmpty() const;

   // Makes the tree empty
   void makeEmpty();

   // Prints the tree in the order specified
   void print(ostream & Outstream, TraversalOrderType order );   

private:

   // . . .

};
```

#### Using the BST ####
```C++
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
```

- - - -
- - - -

# Practice Question #

Use the "Tree.h", "TreeNode.h", and "Customer.h" files for this question.

Create a program that stores data for a car wash. Upon running the program, the user
will be greeted with a menu with the following options:

- I: Checks in the customer. The user will be asked to insert the name of the customer,
the license plate number, and whether or not the customer wants a premium wash.

- P: Print the list of checked in customers.

- C: Searches for a customer in the tree and changes whether they want the premium wash or not.

- O: Checks out a customer using their license plate number (delete from tree)

- Q: Empties out the list of checked in customers and quits the program.

### Example Output ###
##### User Input is surrounded by [] ######
```
I) Check in  
P) Print checked in customers  
C) Change wash preference  
O) Check out  
Q) Quit  
Input: [I]  

Name: [Oscar Olazabal]
License Plate: [QWERTY1]
Premium Wash? (y/n): [y]
Customer checked in

I) Check in
P) Print checked in customers
C) Change wash preference
O) Check out
Q) Quit
Input: [I]

Name: [Charles Bucher]
License Plate: [POIU123]
Premium Wash? (y/n): [y]
Customer checked in

I) Check in
P) Print checked in customers
C) Change wash preference
O) Check out
Q) Quit
Input: [I]

Name: [William Clemons]
License Plate: [ASD12FD]
Premium Wash? (y/n): [n]
Customer checked in

I) Check in
P) Print checked in customers
C) Change wash preference
O) Check out
Q) Quit
Input: [P]

Name: William Clemons
License Plate Number: ASD12FD
Premium Wash: No

Name: Charles Bucher
License Plate Number: POIU123
Premium Wash: Yes

Name: Oscar Olazabal
License Plate Number: QWERTY1
Premium Wash: Yes


I) Check in
P) Print checked in customers
C) Change wash preference
O) Check out
Q) Quit
Input: [C]

License Plate: [QWERTY1]
Premium wash? (y/n): [n]
finishing deleteNode..
Changed to regular wash

I) Check in
P) Print checked in customers
C) Change wash preference
O) Check out
Q) Quit
Input: [P]

Name: William Clemons
License Plate Number: ASD12FD
Premium Wash: No

Name: Charles Bucher
License Plate Number: POIU123
Premium Wash: Yes

Name: Oscar Olazabal
License Plate Number: QWERTY1
Premium Wash: No


I) Check in
P) Print checked in customers
C) Change wash preference
O) Check out
Q) Quit
Input: [O]

License Plate: [POIU123]
finishing deleteNode..
Customer removed

I) Check in
P) Print checked in customers
C) Change wash preference
O) Check out
Q) Quit
Input: [P]

Name: William Clemons
License Plate Number: ASD12FD
Premium Wash: No

Name: Oscar Olazabal
License Plate Number: QWERTY1
Premium Wash: No


I) Check in
P) Print checked in customers
C) Change wash preference
O) Check out
Q) Quit
Input: [Q]
Press any key to continue . . .
```
