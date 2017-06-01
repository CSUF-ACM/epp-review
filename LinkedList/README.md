# Linked List #

# Quick Notes #
1. A linked list is a chain of nodes linked by the nodes’ pointers
2. The “head” of the list represents the front of it, while the node that points to NULL 
represents the back of the list
3. A node consists of an element and a pointer.
    - The element store data
    - The pointer points to the next node  
### Visual Representation: ###
![Singly Linked List](https://github.com/omolazabal/ACM-EPP-Review/blob/master/LinkedList/images/SLL.png)

## Stacks and Queues ##
Visit https://visualgo.net/en/list for a visual representation of stack and queue
1. Stack: first in, last out
    - A stack can be created with a singly linked list, like the one above.  
    - The head represents the top of the stack  
    - When you push an element, you insert it at the head of the list. When you pop an element off, you 
    remove the element at the head (the 5) and set the head as the next element (the 2).
    - The first element that was inserted into the stack, would be the one that points to NULL (the 1).
##### Pushing and popping from stack: #####
![Stack](https://github.com/omolazabal/ACM-EPP-Review/blob/master/LinkedList/images/stack.gif)
    
2. Queues: first in, first out
    - A queue can be created with a doubly linked list, like the one below.
    - A doubly linked list contains two pointers per node: one that points to the next element, another 
    that points to the previous element
    - The head represents the front of the queue, the tail represents the back of the queue
    - When you enqueue an element you insert it through the back of the queue. When you dequeue an element 
    you remove it from the front of the queue
    - The first element that was inserted into the queue would be the one the header points to (the 3)
##### Enqueuing and dequeuing from queue: #####
![Stack](https://github.com/omolazabal/ACM-EPP-Review/blob/master/LinkedList/images/queue.gif)

##### Visual Representation of Queue: #####
![Doubly Linked List](https://github.com/omolazabal/ACM-EPP-Review/blob/master/LinkedList/images/DLL.png)

----
----

# Practice Question #

Using the struct below, create a linked list with the functions listed below. The insertFront function and 
function headers are provided.

```C++
struct Node {
	int data;		// data
	Node* next;	// pointer to the next node in list
};

void insertFront(Node* &head, int element) {
	Node* newNode = new Node;	// allocates a new node.
	newNode->data = element;	// assigns a value for data in newNode.
	newNode->next = head;		// the node head points to is now the node that 
// comes after newNode.
	head = newNode;			// newNode is now the head.
}

int main() {

	Node *head = NULL;			// creates a pointer to the front of the list
	insertFront(head, 8);		// inserts 8 at the front of the list

}

```
  
   
1. Create a function that prints all of the elements in the list.
  
```C++
void printList(Node* &head) { 
}
```
  
    
2. Create a function inserts an element somewhere in the list, given a position. 0 being the front of the list, 
1 being second, etc. No need to bound check; assume the user will always insert a valid position.
  
```C++
void insert(Node* &head, int element, int position ) { 
}
```
  
    
3. Create a function that connects one list to another and deletes the list that was connected. For example, if 
list 1 consists of 1, 2, 3, 4 and list 2 consists of 5, 6, 7, 8; after calling the function, list 1 should 
consists of 1, 2, 3, 4, 5, 6, 7, 8 and list 2 should contain nothing.
   
```C++
void combine(Node* &head1, Node* &head2) { 
}
```
  
    
4. Create a function that deletes the whole list
  
```C++
void deleteList(Node* &head) { 
}
```

5. Create a function that creates a copy of a list. The function will return the pointer to the new list.

```C++
Node* copyList(Node* &head1) {
}
```

