# Pointers & References #

## 1. Pointers

- A pointer is a variable type that stores the address (or reference) of another variable type.

-  It must be "de-referenced" before any data manipulation.

-  Denoted by '*'

```C++
int * myPointer; // Created a pointer to an int called 'myPointer'
```

- To assign a value to a pointer, you must use the '&' address sign, or use the C++ 'new' keyword'

```C++
int myVariable;
myPointer = &myVariables; // Stores the address of myVariable into myPointer

MyClass * classInstance = new MyClass(); Creates a pointer to an object of type MyClass
```

- To de-reference a pointer, simply put a '*' next to your pointer to access the variable referenced by your pointer
- When working with classes or structs, to reference members or methods, you have two options:
    - (*myPointer).method .....
    - myPointer->method


```C++
*myPointer = 5; // Sets the value at the address location myPointer references to 5.

myClassPointer->member = 5; //Sets the class member of the class instance that myPointer points to, to 5.
(*myClassPointer).method(); //Calls the method of the class instance that myClassPointer points to.
```

- Maniuplating the data from a pointer or from the object/variable itself can be seen using either the pointer or the variable/obejct

```C++
*myPointer = 3;
cout << myVariable << endl; // Will print a 3
myVariable = 4;
cout << *myPointer << endl; // Will print a 4
```

## 2. References

- A reference is a specific type of pointer, that can be thought of a joint clone to another variable or object
- Denoted by '&'
```C++
int & myReference; // Created a reference to an int called 'myReference'
```
- The object or variable that a reference references, can have it's data directly manipulated without needing to de-reference

```C++
int myVariable;
myReference = myVariables; // Can directly assign a reference to an int to an int

myReference = 3;
cout << myVariable << endl; // Will print a 3
myVariable = 4;
cout << myReference << endl; // Will print a 4
```
- Not as commonly used as pointers (are unique to C++)

## 3. Passing arguments by reference or by value

- Most simple arguments pass function/method arguments by value. This means that when a function is called, it copies the value of the variable passed in, and never changes the value of the variable itself.

```C++
int add2(int a)
{
    return 2 + a;
};

int myVar = 6;

cout << add(myVar) << endl;  // This will print 12
cout << myVar << endl;          // This will print a 6, as myVar was passed by value, not by reference
```

- If a function has an argument by reference, it means it takes a pointer to to the variable passed in, and the function now has the ability to manipulate the variable since it knows it's memory address'

```C++
int add2(int * a) // Notice the argument requires a pointer to an int, not simply an int
{
    *a = *a + 2;
    return *a;
};

int myVar = 6;


cout << add2(&myVar) << endl;    // This will print 12
```
>__Note:__   
It may seem incorrect that add2(&myVar) works, as there wasn't a proper 'pointer' passed in as an argument. The reason this works anyways, is because of what a pointer is. A pointer stores a memory address of an object/variable. Thus, when a function requires a pointer (to an int, for example), you can pass in the memory address of an int, as the memory address of an int is exactly what an int * references`

```C++
cout << myVar << endl;          
// This will print a 12 as well, since myVar was passed by reference, and was manipulated within the function.
```

----
----

# Problems

1. Practice creating simple pointers and references for any variable of your choosing
2. Create a simple class of you choosing. Within main, create an array of pointers to your class. Initiliaze and add data using the array of pointers. Demonstrate knowledge of the different ways to dereference pointers.
3. Create a linked list, using the node struct to mimick the data below:

| Index | Data    |
|:-----:|:-------:|
| 0     | 2  -> 7 |
| 1     | 3       |
| 2     | 0 -> 5  |
| 3     | null    |
| 4     | 9       |
| 5     | 1       |

Print out the data to the screen in the following format:
```
2 7
3
0 5

9
1
```