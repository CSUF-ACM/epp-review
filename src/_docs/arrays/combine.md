---
title: Combine
permalink: /docs/arrays/combine/
---

Create a function named {% ihighlight c++ %}combine{% endihighlight %}. Its parameters are an array of integers, the size of the array, a second array of integers, and the size of the second array.

{% highlight c++ %}
void combine(int arr1[], int &size1, int arr2[], int size2) {
    // . . .
}
{% endhighlight %}

This function will insert the contents of array 2 into the middle of the contents of array 1 and will update the value of the size variable. It is safe to assume that array 1's capacity is large enough to hold the contents of array 1 + the contents of array 2.

Below is an example of how array 1 should look like before and after the function call. Note that array 1 is initialized with a capacity of 10, but the size variable is set to 6 because we are only using 6 indices initially. The remaining indices are put to use when combining the arrays.

---

>### Before

#### Array 1
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
    <td>1</td>
    <td>2</td>
    <td>3</td>
    <td>4</td>
    <td>5</td>
    <td>6</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
    <td>-</td>
  </tr>
</table>
- SIZE : 6

#### Array 2
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
    <td>20</td>
    <td>21</td>
    <td>22</td>
    <td>23</td>
  </tr>
</table>
- SIZE : 4

---

>### After:

#### Array 1
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
    <td>1</td>
    <td>2</td>
    <td>3</td>
    <td>20</td>
    <td>21</td>
    <td>22</td>
    <td>23</td>
    <td>4</td>
    <td>5</td>
    <td>6</td>
  </tr>
</table>
- SIZE: 10

---