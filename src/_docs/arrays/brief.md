---
title: Brief
permalink: /docs/arrays/brief/
---

### Array Basics
An array is a collection of elements of the same data type placed in a contiguous block of memory. Each element in the array can be referenced by its index. An array's index has the range of 0 to N-1, where N is the number of elements the array can hold.  

It is important to note that an array's capacity is a constant; it cannot be made larger or smaller. If one wishes to store more data than an array can hold, one would have to allocate a larger array and copy the contents of the smaller array into the larger one.  

Let's take a look at the example below.

{% highlight c++ %}
double f[5];
int m[10];
f[4] = 2.5;
m[2] = 4;
cout << f[m[2]];
{% endhighlight %}

The lines {% ihighlight c++ %}double f[5]{% endihighlight %} and {% ihighlight c++ %}int m[10]{% endihighlight %}, respectively, allocate an array of floating point numbers whose capacity is 5 and an array of integers whose capacity is 10.

We then assign 2.5 to the fourth element of the array {% ihighlight c++ %}f{% endihighlight %} and 4 to the second element of the {% ihighlight c++ %}m{% endihighlight %}. The resulting arrays are:  

##### f
<table>
  <tr>
    <th>INDEX</th>
    <th>0</th>
    <th>1</th>
    <th>2</th>
    <th>3</th>
    <th>4</th>
  </tr>
  <tr>
    <td>ELEMENT</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
    <td>2.5</td>
  </tr>
</table>

##### m
<table>
  <tr>
    <th>INDEX</th>
    <th>0</th>
    <th>1</th>
    <th>2</th>
    <th>3</th>
    <th>4</th>
    <th>5</th>
    <th>6</th>
    <th>7</th>
    <th>8</th>
    <th>9</th>
  </tr>
  <tr>
    <td>ELEMENT</td>
    <td>-</td>
    <td>-</td>
    <td>4</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
  </tr>
</table>

The final line, {% ihighlight c++ %}cout << f[m[2]]{% endihighlight %} outputs the fourth element of {% ihighlight c++ %}f{% endihighlight %}.  

You are able to initialize arrays. Let's take a look on how to do so.
{% highlight c++ %}
int a[] = {10, 11, 12, 13};
bool b[] = {false, true};
char c[] = {'c', 'a', 't'};
{% endhighlight %}

The resulting arrays look like this:

##### a
<table>
  <tr>
    <th>INDEX</th>
    <th>0</th>
    <th>1</th>
    <th>2</th>
    <th>3</th>
  </tr>
  <tr>
    <td>ELEMENT</td>
    <td>10</td>
    <td>11</td>
    <td>12</td>
    <td>13</td>
  </tr>
</table>

##### b
<table>
  <tr>
    <th>INDEX</th>
    <th>0</th>
    <th>1</th>
  </tr>
  <tr>
    <td>ELEMENT</td>
    <td>false</td>
    <td>true</td>
  </tr>
</table>


##### c
<table>
  <tr>
    <th>INDEX</th>
    <th>0</th>
    <th>1</th>
    <th>2</th>
  </tr>
  <tr>
    <td>ELEMENT</td>
    <td>c</td>
    <td>a</td>
    <td>t</td>
  </tr>
</table>

---

### Bubble Sort 
As a warm up let's take a look at the bubble sort algorithm and walk through it line-by-line.

{% highlight c++ %}
void BubbleSort(int *arr, const int kSize) {
    for (int i = kSize; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
{% endhighlight %}

Before we describe the code, let's visualize the sorting algorithm first.
<div class="image">
    <a href="{{ "/img/bubble.gif" | prepend: site.baseurl }}"><img src="{{ "/img/bubble.gif" | prepend: site.baseurl }}" class="center"></a>
</div>

The algorithm searches through the array in pairs, and swaps elements that are out of order. Naturally, this moves the largest element to the end of the array during the first iteration, the second largest element during the second iteration, etc. Therefore, after the kth iteration of the search, you only have to search through the N-k elements, where N represents the size of the array.

The outer loop {% ihighlight c++ %}for(int i = kSize; i > 0; i--){% endihighlight %} is responsible for keeping track of how many elements need to be searched through. The inner loop {% ihighlight c++ %}for (int j = 0; j < i - 1; j++){% endihighlight %} is used to iterate through the elements that are left. The elements are then swapped if they are out of order. In this case, the elements are swapped if the next element is smaller than the previous.

