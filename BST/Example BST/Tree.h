// CPSC 301
// Original is copyrighted, source avaliable to instructors on request
// Modifications by M. Molodowitch


// Template Tree class definition
#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <cassert>
#include "TreeNode.h"

using namespace std;

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

   TreeNode< ItemType > *treePtr;  // pointer to the root

   //utility functions 
   void printHelper( TreeNode< ItemType > *, ostream &, TraversalOrderType );
   bool insertHelper( TreeNode< ItemType >* & , const ItemType & );
   bool deleteHelper( TreeNode< ItemType >* & , const ItemType & );
   void deleteNode( TreeNode<ItemType >*& );
   bool retrieveHelper( TreeNode< ItemType >* & , const ItemType &, ItemType & );
   void makeEmptyHelper ( TreeNode< ItemType >* &);
};

// utility function to delete node pointed to by ptr
template< class ItemType >   
void Tree< ItemType >::deleteNode( TreeNode<ItemType >*& ptr )
{
	if (ptr != nullptr)
	{
		if (ptr->leftPtr == nullptr )
		{
			TreeNode<ItemType >* temp = ptr;
			ptr = ptr->rightPtr;
			temp->rightPtr = nullptr;
			delete temp;
		}
		else if (ptr->rightPtr == nullptr )
		{
			TreeNode< ItemType >* temp = ptr;
			ptr = ptr->leftPtr;
			temp->leftPtr = nullptr;
			delete temp;
		}
		else
		{
			TreeNode< ItemType >* temp = ptr->leftPtr;

			if (temp->rightPtr == nullptr)
			{
				ptr->info = temp->info;
				ptr->leftPtr = temp->leftPtr;
				temp->leftPtr = nullptr;
				delete temp;
			}
			else
			{
				while ( (temp->rightPtr)->rightPtr != nullptr )
					temp = temp->rightPtr;

				ptr->info = (temp->rightPtr)->info;

				TreeNode< ItemType >* delePtr = temp->rightPtr;
				temp->rightPtr = (temp->rightPtr)->leftPtr;
				delePtr->leftPtr = 0;
				delete delePtr;
			}
			
		}
	}
cout <<"finishing deleteNode..\n";
}


// Default constructor
template< class ItemType >
Tree< ItemType >::Tree() 
{
	treePtr = nullptr;
}

// empties tree of all nodes
template< class ItemType >
void Tree< ItemType >::makeEmpty()
{
	makeEmptyHelper(treePtr);
}

template< class ItemType >
void Tree< ItemType >::makeEmptyHelper ( TreeNode< ItemType >* & ptr)
{
	if ( ptr != nullptr )
	{
		makeEmptyHelper(ptr->leftPtr);
		makeEmptyHelper(ptr->rightPtr);
		
		delete ptr;
		ptr = nullptr;
	}
}


// Destructor
template< class ItemType >
Tree< ItemType >::~Tree()
{
   makeEmpty();
}

// Insert a node into the Tree
template< class ItemType >
bool Tree< ItemType >::insert( const ItemType & value )
{
	return insertHelper( treePtr, value );
}

//recursive helper function for insertion
template< class ItemType >
bool Tree< ItemType >::insertHelper( TreeNode< ItemType >*& ptr, const ItemType & value)
{
	TreeNode<ItemType> * newPtr = new TreeNode<ItemType >( value );

    if (newPtr == 0)		//failure to allocate new node
	   return false;
   
   else 
   {
	   if ( ptr == nullptr )  { // Tree is empty, so insert new node
         ptr = newPtr;
		 return true;
	   }
	   else if ( value == ptr->info) // value already in tree
	   {
		   cout << "value is already in the tree.\n\n";
		   return false;
	   }
	   else if ( value < ptr->info)   // insert in left subtree
	   {
		   return insertHelper( ptr->leftPtr, value);

	   }
	   else  // value > treePtr->info , insert in right subtree 
	   {						
		  return insertHelper( ptr->rightPtr,value);
	   }
   }
}

// Delete a value from the Tree
template< class ItemType >
bool Tree< ItemType >::deleteInfo( const ItemType & value )
{
	return deleteHelper( treePtr, value );
}
 
//recursive helper function for deletion 	
template< class ItemType >
bool Tree< ItemType >::deleteHelper( TreeNode< ItemType >* & ptr, const ItemType & value)
{
	if ( ptr == nullptr )  { // Tree is empty
       cout << "Value not found.\n\n";
	   return false;
	}
	else if ( value == ptr->info) // value found in tree
	{
	   deleteNode( ptr );
	   return true;
	}
	else if ( value < ptr->info ) 
	{
	   return deleteHelper(ptr->leftPtr, value);
	   
	}
	else	//  value > ptr->info
	{
	   return deleteHelper(ptr->rightPtr, value);
	   
	}
}


// Retrieve info from tree
template< class ItemType >
bool Tree< ItemType >::retrieve( const ItemType & searchValue, ItemType & retrievedValue )
{
	return retrieveHelper( treePtr, searchValue, retrievedValue );
}

template< class ItemType >
bool Tree< ItemType >::retrieveHelper( TreeNode< ItemType >* & ptr, const ItemType & searchValue, ItemType & retrievedValue)
{
   if ( ptr == nullptr )             // Tree is empty
      return false;             // Retrieve unsuccessful
   else {
   
	   if ( searchValue < ptr->info ) 
	   {
		  return retrieveHelper( ptr->leftPtr, searchValue, retrievedValue );
	   }
	   else if ( searchValue > ptr->info ) 
	   {
		  return retrieveHelper( ptr->rightPtr, searchValue, retrievedValue);
	   }
	   else				// searchValue == ptr->info
	   {
		  retrievedValue = ptr->info;	//retrieve successful			
		  return true;
	   }
 
   }
}


// Is the Tree empty?
template< class ItemType > 
bool Tree< ItemType >::isEmpty() const
{ 
	return (treePtr == nullptr); 
}


// recursive helper function for printing contents of tree in given order
template< class ItemType > 
void Tree< ItemType >::print(ostream & Outstream, TraversalOrderType order )  
{
   if ( nullptr == treePtr )
	   Outstream << "Tree is empty." << endl;
   else
	   printHelper( treePtr, Outstream, order );

}


// recursive helper function for printing to any ostream
template< class ItemType >
void Tree< ItemType >::printHelper( TreeNode< ItemType > * ptr, ostream & Outstream, TraversalOrderType order)
{					   
   if ( ptr != nullptr ) 
   {
	   switch (order){
		  case preorder:
			  Outstream << ptr->info << endl;
			  printHelper ( ptr->leftPtr, Outstream, preorder);
			  printHelper ( ptr->rightPtr, Outstream, preorder);
			  break;
		  case inorder:
			  printHelper ( ptr->leftPtr, Outstream, inorder);
			  Outstream << ptr->info << endl;
			  printHelper ( ptr->rightPtr, Outstream, inorder);
			  break;
		  case postorder:
			  printHelper ( ptr->leftPtr, Outstream, postorder);
			  printHelper ( ptr->rightPtr, Outstream, postorder);
			  Outstream << ptr->info << endl;
			  break;
	   }

	}

}

#endif


