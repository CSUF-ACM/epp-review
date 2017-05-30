// CPSC 301
// Original source attribution available
// Modified by M. Molodowitch

// TreeNode template definition: each TreeNode object contains data, left pointer, and right pointer.

#ifndef TREENODE_H
#define TREENODE_H



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

// Constructor
template<class ItemType>
TreeNode< ItemType >::TreeNode( const ItemType & data )
{
   info = data; 
   leftPtr= nullptr; 
   rightPtr = nullptr;
}

template<class ItemType>
TreeNode< ItemType >::TreeNode( )
{
   leftPtr= nullptr; 
   rightPtr = nullptr;
}


// Return a copy of the data in the node
template< class ItemType >
ItemType TreeNode< ItemType >::getInfo() const 
{ 
	return info; 
}

#endif


