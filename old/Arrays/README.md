# Notes
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

## Bubble Sort 
- As a warm up lets take a look at the bubble sort algorithm and walk through it line-by-line.
```C++
void BubbleSort(int *arr, const int kSize) {
    for (int i = kSize; i > 0; i--) {       // Loop a total of kSize times.
        for (int j = 0; j < i - 1; j++) {   // Loop through the array.
            if (arr[j] > arr[j + 1]) {      // If previous number is greater than next number
                int temp = arr[j + 1];      // then swap.
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
 ```
[Visual representation of bubble sort](https://visualgo.net/en/sorting)
![](http://i.imgur.com/M7KS24j.gif)

A sample program can be found [here](https://github.com/CSUF-ACM/acm-epp-review/blob/master/Arrays/bubble_sort.cpp)

- - - -

# Practice Questions

1. Create a function named "FindSum". Its parameters are an array of integers and the size of the array.  It has the return type of int.

```C++
int FindSum(int *arr, int &size) {

    // . . .

}
```

The function must remove all negative values in the array, modify the value of size variable, and return the sum of the remaining values. Below is an example of how the array should look like before and after calling the function.

### Before: ###

Index |  0  |  1  |  2  |  3  |  4  |  5  |  6     
 ---- | --- | --- | --- | --- | --- | --- | ----
Value |  4  | -2  |  6  |  1  | -3  | -9  | -5  
  
- SIZE: 7


### After: ###

Index |  0  |  1  |  2  |  3  |  4  |  5  |  6  
------|---- | --- | --- | --- | --- | --- | ----
Value |  4  |  6  |  1  |  -  |  -  |  -  |  -  

- SIZE: 3

<br />
<br />

2. Create a function named "InsertMiddle". Its parameters are an array of integers, the size of the array, a second array of integers, and the size of the second array.

```C++
void InsertMiddle(int *arr1, int &size1, int *arr2, int size2) {

    // . . .

}
```

This function will insert the contents of array 2 in the middle of the contents of array 1 and will update the value of the size variable. It is safe to assume that array 1's capacity is large enough to hold the contents of array 1 + the contents of array 2.

Below is an example of how array 1 should look like before and after the function call. Note that array 1 is initialized with a capacity of 10, but the size variable is set to 6 because we are only using 6 indicies initially. The remaining indicies are put to use when combining the arrays.

### Before: ###

#### Array 1 ####
Index |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  
------|---- | --- | --- | --- | --- | --- | --- | --- | --- | ----
Value |  1  |  2  |  3  |  4  |  5  |  6  |  -  |  -  |  -  |  -  
  
- SIZE: 6

#### Array 2 ####
Index |  0  |  1  |  2  |  3   
------|---- | --- | --- | ----
Value | 20  | 21  | 22  | 23 
 
- SIZE: 4


### After: ###

#### Array 1 ####
Index |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  
----- | --- | --- | --- | --- | --- | --- | --- | --- | --- | ----
Value |  1  |  2  |  3  | 20  | 21  | 22  | 23  |  4  |  5  |  6  
  
- SIZE: 10
