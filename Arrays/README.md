# Quick Notes #
- An array is a collection of elements
- An array's capacity is a constant
- Each element of an array is referenced by it's index
  - the index has a range of 0 to N - 1; where N is the number of elements the array can hold

```C++
//From  Data Structures & Algorithms by Goodrich, Tamassia, Mount

double f[5];        // array of 5 doubles: f[0], ..., f[4]
int m[10]           // array of 10 ints: ,[0], ..., m[9]
f[4] = 2.5;
m[2] = 4;
cout << f[m[2]];    // outputs f[4], which is 2.5

```
```C++
//From  Data Structures & Algorithms by Goodrich, Tamassia, Mount

int a[] = {10, 11, 12, 13};     // declares and initializes a[4]
bool b[] = {false, true};       // declares and initializes b[2]
char c[] = {'c', 'a', 't'};     // declares and initializes c[3]

```

- - - -
- - - -

# Bubble Sort #

[Visual representation of bubble sort](https://visualgo.net/en/sorting)
![](http://i.imgur.com/M7KS24j.gif)

- - - -
- - - -

# Practice Question 1 #

Create a function named "findSum". Its parameters are an array of integers and the size of the array. 
It has the return type of int.

```C++
int findSum(int *arr, int &size) {

    // . . .

}
```

This function must remove all negative values in the array, arrange the remaining values in the array 
so that they are side-by-side and at the front of the array, modify the value of size, and return the
sum of the remaining values.

## Example: ##

### Before: ###

  0  |  1  |  2  |  3  |  4  |  5  |  6     
---- | --- | --- | --- | --- | --- | ----
  4  | -2  |  6  |  1  | -3  | -9  | -5  
  
- SIZE: 7


### After: ###

  0  |  1  |  2  |  3  |  4  |  5  |  6  
---- | --- | --- | --- | --- | --- | ----
  4  |  6  |  1  |  -  |  -  |  -  |  -  

- SIZE: 3
- SUM: 11

- - - -
- - - -

# Practice Question 2 #

Create a function named "insertMiddle". Its parameters are an array of integers, the size of the array, a
second array of integers, the size of the second array

```C++
void insertMiddle(int *arr1, int &size1, int *arr2, int size2) {

    // . . .

}
```

This function will insert the contents of array 2 in the middle of the contents of array 1 and modify the
value of size. It is safe to assume that array 1's capacity is enough to hold  the contents of array 1 + the 
contents of array 2.

For example, below I initialized an array with a total of 10 cells, but only used 6 initially and used the
other four when inserting array 2.


## Example: ##

### Before: ###

#### Array 1 ####
  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  
---- | --- | --- | --- | --- | --- | --- | --- | --- | ----
  1  |  2  |  3  |  4  |  5  |  6  |  -  |  -  |  -  |  -  
  
- SIZE: 6

#### Array 2 ####
  0  |  1  |  2  |  3   
---- | --- | --- | ----
 20  | 21  | 22  | 23 
 
- SIZE: 4


### After: ###

#### Array 1 ####
  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  
---- | --- | --- | --- | --- | --- | --- | --- | --- | ----
  1  |  2  |  3  | 20  | 21  | 22  | 23  |  4  |  5  |  6  
  
- SIZE: 10
