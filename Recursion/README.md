# Recursion #

#### Simple Definition ####
- Recursion is when a function/method calls itself somewhere in its own return statement.

#### Another Definition ####
- Recursion is when a function/method solves a very small part of a problem, and then passes the  rest of the problem off to someone else. That someone else is the function itself.

#### Recursion Prototype ####

```C++
foo(/*params...*/)
{
	//Base step(s)
  //Return a value(s) that doesn’t call foo()
  //This is the value(s) we are in some way approaching
	
	//Recursive step(s)
  //Return a value(s) that does call foo()
  //Move the value(s) in the foo() call towards the base case
}
```

#### Example Recursive Function: ####
```C++
int fib(int fib_num)
{
    //Base case
    if(fib_num == 1 || fib_num == 2)
    {
        return 1;
    }
    
    //Recursive case - calls its own function. -1 & -2 approach to the base case values.
    return fib(fib_num - 1) + fib(fib_num - 2);
}
```

#### Step-by-step Recursive Walkthrough ####
```
fib(4)
Is 4 = 1 or 2? No.
	= fib(3) + fib(2)
	Is 3 = (1 or 2)? No
		= fib(2) + fib(1)
		Is 2 = (1 or 2)? Yes
			= 1
		= 1 + fib(1)
		Is 1 = (1 or 2)? Yes
			= 1
		= 1 + 1
		= 2
	= 2 + fib(2)
	Is 2 = (1 or 2)? Yes.
		= 1
	= 2 + 1
= 3

fib(4) = 3.
```

----
----

# Problems: #

### Easy ###
1. Create a recursive function to calculate the a value of a certain exponent. Use the function definition: 
`int power(int base, int exp);` (2 ^ 4 = power(2, 4))
2. Given an array, create a recursive function to calculate the number of even numbers within the array. 
Use the function definition: `int evens(int index, int * nums, int arr_size);`
3. You are building a pyramid where each layer has one more block than the one above it, where the top 
layer only has one block. Create a recursive function to calculate the total number of blocks needed to create 
a pyramid with N layers. Use the function definition: `int pyramid(int layers);`

### Medium ###
1. Create a recursive function to calculate the number of times that 7 appears within a given integer. Use the 
function definition: `int count7(int number)`

### Hard ###
1. Create a recursive function that calculates whether or not an array of numbers contains some group of 
numbers that can add to a specific number, with the constraint that all 6’s must be included in that list. 
Use the function definition: `bool groupWith6(int index, int * nums, int target, int arr_size)`.  
    - Examples:  
     ` groupWith6(0, [2, 6, 7, 3], 8, 4) = true`  
     ` groupWith6(0, [2, 6, 7, 3], 10, 4) = false`  
     ` groupWith6(0, [2, 6, 7, 3], 16, 4) = true`  
