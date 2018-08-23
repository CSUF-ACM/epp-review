# Linked List

## Notes
- A linked list is a collection of nodes that together form a linear ordering.
- The “head” node of the list represents the front, while the node that points to NULL represents the back of the list
- A node consists of an element and a pointer.
    - The element store data
    - The pointer points to the next node  
#### Visual Representation
![Singly Linked List](https://github.com/CSUF-ACM/acm-epp-review/blob/master/Linked%20List/images/SLL.png)

----

# Practice Questions

```C++
struct Node {
    int data;
    Node* next;  // Pointer to the next node in list.
};

void insertFront(Node* &head, int element) {
    Node* newNode = new Node;   // Allocates a new node.
    newNode->data = element;    // Assigns a value for data in newNode.
    newNode->next = head;       // The node head points to is now the node that 
                                // comes after newNode.
    head = newNode;             // NewNode is now the head.
}

int main() {
    Node *head = NULL;          // Creates a pointer to the front of the list.
    insertFront(head, 8);       // Inserts 8 at the front of the list.
}

```

### Using the struct above, complete the following tasks. The insertFront function and function headers are provided.
  
1. Create a function that prints all of the elements in the list.
  
```C++
void printList(Node* &head) { 

}
```

<br />

2. Create a function inserts an element at a given position. Position 0 represents the front of the list, 1 represents the following position, etc. No need to bound check; assume the user will always insert a valid position.
  
```C++
void insert(Node* &head, int element, int position ) { 

}
```

<br /> 

3. Create a function that combines two lists into one. For example, if list A consists of 1, 2, 3, 4 and list B consists of 5, 6, 7, 8; after calling the function, list A should consists of 1, 2, 3, 4, 5, 6, 7, 8 and list B should contain nothing.
   
```C++
void combine(Node* &head1, Node* &head2) { 

}
```
 <br />
 
4. Create a function that deletes the whole list
  
```C++
void deleteList(Node* &head) { 

}
```
<br />

5. Create a function that creates a copy of a list. The function will return the pointer to the new list.

```C++
Node* copyList(Node* &head1) {

}
```

