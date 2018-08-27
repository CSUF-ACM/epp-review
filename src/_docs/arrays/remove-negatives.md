---
title: Remove Negatives
permalink: /docs/arrays/remove-negatives/
---
Create a function named "removeNegatives". Its parameters are an array of integers and the size of the array.  It has the return type of int.

{% highlight c++ %}
int removeNegatives(int arr[], int &size) {
    // . . .
}
{% endhighlight %}

The function must remove all negative values in the array, modify the value of size variable, and return the sum of the remaining values. Below is an example of how the array should look like before and after calling the function.

#### Before:
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
  </tr>
  <tr>
    <td>ELEMENT</td>
    <td>4</td>
    <td>-2</td>
    <td>6</td>
    <td>1</td>
    <td>-3</td>
    <td>-9</td>
    <td>-5</td>
  </tr>
</table>
- SIZE: 7

#### After:
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
  </tr>
  <tr>
    <td>ELEMENT</td>
    <td>4</td>
    <td>6</td>
    <td>1</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
  </tr>
</table>
- SIZE: 3

<br />