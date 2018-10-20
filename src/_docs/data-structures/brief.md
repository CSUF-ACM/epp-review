---
title: Brief
permalink: /docs/data-structures/brief/
---

### Basic Data Structures

Data structures are methods of managing and storing data that enables efficient access and modification. There are [hundreds](https://en.wikipedia.org/wiki/List_of_data_structures) of different data structures. 

We will be going over three popular data structures: the **stack**, the **queue**, and the **binary search tree**.

#### Stack
<div class="image">
    <a href="{{ "/img/stack.gif" | prepend: site.baseurl }}"><img src="{{ "/img/stack.gif" | prepend: site.baseurl }}" class="center"></a>
</div>
<center>Visit <a href="https://visualgo.net/en/stack">VisuAlgo</a> to help visualize stacks</center>

A stack is a container of objects that are inserted and removed according to the last-in first-out (LIFO) principle. This means that the last thing added to the stack is the first thing that gets removed. A real-world example of a stack would be a PEZ dispenser, or a stack of plates at a buffet.

There are two principle operations to a stack:

- **push**, adds an element to the stack
- **pop**, removes the most recently added element

<br/>

#### Queue

<div class="image">
    <a href="{{ "/img/queue.gif" | prepend: site.baseurl }}"><img src="{{ "/img/queue.gif" | prepend: site.baseurl }}" class="center"></a>
</div>
<center>Visit <a href="https://visualgo.net/en/queue">VisuAlgo</a> to help visualize queues</center>

A queue is a container of elements that are inserted and removed according to the first-in first-out principle (FIFO). The first element added to the queue will be the first one to be removed. A real-world example of a queue would be a line of people waiting to get on an amusement park ride.

There are two principle operations to a queue:

- **enqueue**, adds an element to the back of the queue
- **dequeue**, removes an element from the front of the queue

<br/>

#### Binary Search Tree

<div class="image">
    <a href="{{ "/img/bst.gif" | prepend: site.baseurl }}"><img src="{{ "/img/bst.gif" | prepend: site.baseurl }}" class="center"></a>
</div>
<center>Visit <a href="https://visualgo.net/en/bst">VisuAlgo</a> to help visualize binary search trees</center>

A binary search tree is an abstract data type that stores elements hierarchically. They allow fast lookup, insertion, and deletion. They keep their keys stored in order, so that lookup and other operations can use the principle of binary search. They traverse the tree from root to leaf making comparisons to keys stored in the nodes of the tree and deciding, on the basis of the comparison, to continue searching in the left or right subtrees.

There are three principle operations to a binary search tree:

- **searching**, searches for a specific key
- **insertion**, searches for the appropriate location to insert the key, then inserts the key
- **deletion**, searches for the key and deletes it.

### Standard Template Library (STL)

The C++ STL [provides multiple containers](http://www.cplusplus.com/reference/stl/) that can be easily used. We will be going over the containers that resemble stacks, queues, and binary search trees.

#### STL Stack

The <a href="http://www.cplusplus.com/reference/stack/stack/" target="_blank">STL Stack</a> supports the following operations:
<table>
  <tr>
    <th>Member Function</th>
    <th>Definition</th>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/stack/stack/empty/" target="_blank">empty()</a></td>
    <td>Test whether container is empty</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/stack/stack/size/" target="_blank">size()</a></td>
    <td>Return size</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/stack/stack/top/" target="_blank">top()</a></td>
    <td>Access the next element</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/stack/stack/push/" target="_blank">push()</a></td>
    <td>Insert element</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/stack/stack/emplace/" target="_blank">emplace()</a></td>
    <td>Construct and insert element</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/stack/stack/pop/" target="_blank">pop()</a></td>
    <td>Remove top element</td>
  </tr>
</table>

The code below shows the STL Stack in action.
{% highlight c++ %}
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;
    myStack.push(8);
    myStack.push(4);
    cout << myStack.top();
    myStack.pop();

    if (!myStack.empty())
        myStack.pop();
}
{% endhighlight %}

{% ihighlight c++ %}stack<int> myStack{% endihighlight %} declares a stack of integers named {% ihighlight c++ %}myStack{% endihighlight %}. {% ihighlight c++ %}myStack.push(x){% endihighlight %} inserts elements into the stack, while {% ihighlight c++ %}myStack.pop(){% endihighlight %} removes elements from the stack. {% ihighlight c++ %}cout << myStack.top(){% endihighlight %} prints 4. To check if the stack is empty, {% ihighlight c++ %}myStack.empty(){% endihighlight %} is called.

<br/>

#### STL Queue

The <a href="http://www.cplusplus.com/reference/queue/queue/" target="_blank">STL Queue</a> supports the following operations:
<table>
  <tr>
    <th>Member Function</th>
    <th>Definition</th>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/queue/queue/empty/" target="_blank">empty()</a></td>
    <td>Test whether container is empty</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/queue/queue/size/" target="_blank">size()</a></td>
    <td>Return size</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/queue/queue/front/" target="_blank">front()</a></td>
    <td>Access the next element</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/queue/queue/back/" target="_blank">back()</a></td>
    <td>Access the last element</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/queue/queue/push/" target="_blank">push()</a></td>
    <td>Insert element</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/queue/queue/emplace/" target="_blank">emplace()</a></td>
    <td>Construct and insert element</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/queue/queue/pop/" target="_blank">pop()</a></td>
    <td>Remove top element</td>
  </tr>
</table>

The code below shows the STL Queue in action.
{% highlight c++ %}
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;
    myQueue.push(8);
    myQueue.push(4);
    cout << myQueue.front();
    cout << myQueue.back();
    myQueue.pop();

    if (!s.empty())
        s.pop();
}
{% endhighlight %}

{% ihighlight c++ %}queue<int> myQueue{% endihighlight %} declares a queue of integers named {% ihighlight c++ %}myQueue{% endihighlight %}. {% ihighlight c++ %}myQueue.push(x){% endihighlight %} inserts elements into the queue, while {% ihighlight c++ %}myQueue.pop(){% endihighlight %} removes elements from the queue. {% ihighlight c++ %}cout << myQueue.front(){% endihighlight %} prints 8, while {% ihighlight c++ %}cout << myQueue.back(){% endihighlight %} prints 4. To check if the queue is empty, {% ihighlight c++ %}myQueue.empty(){% endihighlight %} is called.

<br/>

#### STL Map

The <a href="http://www.cplusplus.com/reference/map/map/" target="_blank">STL Map</a> supports the following operations:
<table>
  <tr>
    <th>Member Function</th>
    <th>Definition</th>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/map/map/erase/" target="_blank">erase()</a></td>
    <td>Erase elements</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/map/map/clear/" target="_blank">clear()</a></td>
    <td>Clear content</td>
  </tr>
  <tr>
    <td><a href="http://www.cplusplus.com/reference/map/map/find/" target="_blank">find()</a></td>
    <td>Get iterator to element</td>
  </tr>
</table>

The code below shows the STL Map in action.
{% highlight c++ %}
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> age;
    age["tommy"] = 20;
    age["oscar"] = 21;
    cout << age["tommy"];
    cout << age["oscar"];
    age.erase("tommy");
}
{% endhighlight %}

{% ihighlight c++ %}map<string, int> age{% endihighlight %} declares a map with strings as keys and integers as values. {% ihighlight c++ %}age["tommy"] = 20{% endihighlight %} inserts the key, value pair "tommy" and 20 into the map, while {% ihighlight c++ %}age.erase(){% endihighlight %} removes the key, value pair from the map. {% ihighlight c++ %}cout << age["tommy"]{% endihighlight %} prints 20, while {% ihighlight c++ %}cout << age["oscar"]{% endihighlight %} prints 21.

