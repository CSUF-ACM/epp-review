# Classes #

- Constructors
  - Called whenever an instance of the class is created
  - Constructors are used to initialize class members and dynamically allocate memory (if needed)
  - Can have multiple constructors
  - Constructor A doesn’t take any arguments are all members are set to a default value
  - Constructor B takes arguments and class members are set to those argument values
  - Can directly assign members to parameter values before entering the constructor’s { }’s

### Examples: ###
```C++
//These two constructors are equivalent
className(int param1, int param2) : member1(param1), member2(param2) { }

className(int param1, int param2)
{
  member1 = param1;
  member2 = param2;
}
```
```C++
//This constructor assigns default values to the class members
className() 
{
  member1 = 0;
  member2 = 0;
}
```

- Destructors
  - Destructors are called whenever an instance of the class is deleted
  - Used to free any resources that were allocated to that instance when it was created (i.e., dynamically allocated memory


### Examples ###
```C++
~className()
{
  delete[] array_member; //Free dynamically allocated array
  delete non_array_member; //Free dynamically allocated variable
}
```
```C++
//This class had no resources allocated to it
~className() { }
```

- Members
  - These are essentially the variables of the class
  - Can be static, meaning, every instance of this class shares that variable

- Methods
  - Essentially the functions of the class 

- Miscellaneous
  - Public methods/members are accessible by an member of the class using a reference operator . or ->
  - Protected methods/members are only accessible within the class or with friends of the class
  - Private methods/members are only accessible within the class itself. Cannot be externally references.
  - Getters (always public)
  - Used to retrieve private/protected members
  - Setters (always public)
  - Used to set private/protected members

# Problems #

1. Create a class called rectangle. Make all members private and create getter/setter methods for those members. Create a simple 
implementation of the class.  
   -  Create any members/methods for the class you think would pertain or be useful to a rectangle object   
    - Create two constructors for the class - one with default values given to the members, another with parameters used to set 
    the member values. Implement both types.  
    - Make a private static member called number_of_rectangles. Adjust the constructors accordingly so that whenever an instance 
    is created/destroyed, the static member is changed. Create a getter for this static member.  
    - Change the constructors so that all the non-static members are dynamically allocated. Adjust the destructors accordingly.  

2. Create an inheritance class called shape.  
   - Modify your rectangle class such that it inherits from shape.  
   - Create another class such that can inherit from shape  
