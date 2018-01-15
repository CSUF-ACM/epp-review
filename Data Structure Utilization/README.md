# Data Structures

## Stack  
- A stack is a container of objects that are inserted and removed according to the last-in first-out principle
- Example: PEZ candy dispenser 
### Visualization
![stack](https://github.com/CSUF-ACM/acm-epp-review/blob/master/Data%20Structure%20Utilization/imgs/stack.gif)
    
## Queue
- A queue is a container of elements that are inserted and removed according to the first-in-first-out principle.
- Example: A line of people waiting to get on an amusement park ride.
### Visualization
![queue](https://github.com/CSUF-ACM/acm-epp-review/blob/master/Data%20Structure%20Utilization/imgs/queue.gif)

## Binary Search Tree
- A tree is an abstract data type that stores elements hierarchically.
- Example: A filesystem in most operating systems.
### Visualization
![bst](https://github.com/CSUF-ACM/acm-epp-review/blob/master/Data%20Structure%20Utilization/imgs/bst.gif)

Visit https://visualgo.net/en/ for a visual representation of data structures 

----

# Member Functions
## Stack
Name | Task
-----|-----
size | Return size
is_empty | Test whether container is empty
top | Access next element
push | Insert element
pop | Remove top element

## Queue
Name | Task
-----|-----
size | Return size
is_empty | Test whether container is empty
front | Access next element
back | Access last element
enqueue | Insert element
dequeue | Remove next element

## Binary Search Tree
Name | Task
-----|-----
size | Return size
is_empty | Test whether container is empty
retrieve | Access an element
insert | Insert element
remove | Remove an element
remove_all | Remove all elements
print | Print all elements

# Practice Question

#### Using the provided files under the [Practice Questions Files](https://github.com/CSUF-ACM/acm-epp-review/tree/master/Data%20Structure%20Utilization/Practice%20Question%20Files) folder, create a program that checks in and out customers at a car wash.

## Specifics
Upon running the program, the user will be greeted with a menu with the following functions:

- __Check in:__ Checks in the customer. The user will be asked to insert the name of the customer, the license plate number, and whether or not the customer wants a premium wash.
- __Check out:__ Checks out the next customer. A notification stating which customer has been checked out will be displayed. Checked out customers will be stored in a history database.
- __Search:__ Searches the history database for a customer. The customer's details will be printed.
- __Quit:__ Checks out the remaining customers, erases the history, and exits the program.

Use the appropriate data structures. The data structures can be found under the [Data Structures](https://github.com/CSUF-ACM/acm-epp-review/tree/master/Data%20Structure%20Utilization/Data%20Structures) folder.  

Utilize the [customer.h](https://github.com/CSUF-ACM/acm-epp-review/blob/master/Data%20Structure%20Utilization/Practice%20Question%20Files/customer.h) header file to create customer objects. Traits of customers include their name, license plate number, and their wash preference.

Sample programs that utilize the three data structures have been provided. You can view them under the [Examples](https://github.com/CSUF-ACM/acm-epp-review/tree/master/Data%20Structure%20Utilization/Examples) folder. 

### Example Output
##### User Input is surrounded by [ ]
```
1) Check in
2) Check out
3) Search
4) Quit
Input: [1]

Name: [Oscar Olazabal]
License Plate: [QWERTY1]
Premium Wash? (y/n): [y]
Customer checked in

1) Check in
2) Check out
3) Search
4) Quit
Input: [1]

Name: [Charles Bucher]
License Plate: [POIU123]
Premium Wash? (y/n): [y]
Customer checked in

1) Check in
2) Check out
3) Search
4) Quit
Input: [1]

Name: [William Clemons]
License Plate: [ASD12FD]
Premium Wash? (y/n): [n]
Customer checked in

1) Check in
2) Check out
3) Search
4) Quit
Input: [1]

Name: [Bill Nye]
License Plate: [GHJ34LD]
Premium Wash? (y/n): [n]
Customer checked in

1) Check in
2) Check out
3) Search
4) Quit
Input: [3]

Name: [Oscar Olazabal]

Customer not found.

1) Check in
2) Check out
3) Search
4) Quit
Input: [2]

Oscar Olazabal checked out.

1) Check in
2) Check out
3) Search
4) Quit
Input: [3]

Name: [Oscar Olazabal]

Name: Oscar Olazabal
License Plate Number: QWERTY1
Premium Wash: Yes

1) Check in
2) Check out
3) Search
4) Quit
Input: [2]

Charles Bucher checked out.

1) Check in
2) Check out
3) Search
4) Quit
Input: [3]

Name: [Charles Bucher]

Name: Charles Bucher
License Plate Number: POIU123
Premium Wash: Yes

1) Check in
2) Check out
3) Search
4) Quit
Input: [4]

Checking out William Clemons
Checking out Bill Nye
Exiting program...
```
