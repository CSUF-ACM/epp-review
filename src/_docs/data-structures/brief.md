---
title: Brief
permalink: /docs/data-structures/brief/
---

### Basic Data Structures
Data structures are methods of managing and storing data that enables efficient access and modification. There [hundreds](https://en.wikipedia.org/wiki/List_of_data_structures) of data structures. We will be going over three popular data structures; the stack, queue, and binary search tree.

#### Stack
<div class="image">
    <a href="{{ "/img/stack.gif" | prepend: site.baseurl }}"><img src="{{ "/img/stack.gif" | prepend: site.baseurl }}" class="center"></a>
</div>
<center>Visit <a href="https://visualgo.net/en/stack">VisuAlgo</a> to help visualize stacks</center>

A stack is a container of objects that are inserted and removed according to the last-in first-out (LIFO) principle. This means that the last thing added to the stack is the first thing that gets removed. An example of a stack would be a PEZ dispenser.  

There are two principle operations to a stack:
- **push**, adds an element to the stack
- **pop**, removes the most recently added element 

<br/>

#### Queue
<div class="image">
    <a href="{{ "/img/queue.gif" | prepend: site.baseurl }}"><img src="{{ "/img/queue.gif" | prepend: site.baseurl }}" class="center"></a>
</div>
<center>Visit <a href="https://visualgo.net/en/queue">VisuAlgo</a> to help visualize queues</center>

A queue is a container of elements that are inserted and removed according to the first-in first-out principle (FIFO). The first element added to the queue will be the first one to be removed. An example of a queue would be a line of people waiting to get on an amusement park ride.

There are two principle operations to a queue:
- **enqueue**, adds an element to the queue
- **dequeue**, removes the element that was added before all the other elements

<br/>

#### Binary Search Tree
<div class="image">
    <a href="{{ "/img/bst.gif" | prepend: site.baseurl }}"><img src="{{ "/img/bst.gif" | prepend: site.baseurl }}" class="center"></a>
</div>
<center>Visit <a href="https://visualgo.net/en/bst">VisuAlgo</a> to help visualize binary search trees</center>

A binary search tree is an abstract data type that stores elements hierarchically. They allow fast lookup, insertion, and deletion. They keep their keys stored in order, so that loopup and other operations can use the principle of binary search; they tranverse the tree from root to leaf making comparisons to keys stored in the nodes of the tree and deciding, on the basis of the comparison, to continue searching in the left or right subtrees.

There are three principle operations to a binary search tree:
- **searching**, searches for a specific key
- **insertion**, searches for the appropriate location to insery the key, then inserts the key
- **deletion**, searches for the key and deletes it.

### Standard Template Library (STL)
The C++ STL [provides mulitple containers](http://www.cplusplus.com/reference/stl/) that can easily used. We will be going over the containers that resemeble stacks, queues, and binary search trees.

#### STL Stack
The STL Stack supports the following operations:
<table>
  <tr>
    <th>Member Function</th>
    <th>Definition</th>
  </tr>
  <tr>
    <td>empty</td>
    <td>Test whether container is empty</td>
  </tr>
  <tr>
    <td>size</td>
    <td>Return size</td>
  </tr>
  <tr>
    <td>top</td>
    <td>Access the next element</td>
  </tr>
  <tr>
    <td>push</td>
    <td>Insert element</td>
  </tr>
  <tr>
    <td>emplace</td>
    <td>Construct and insert element</td>
  </tr>
  <tr>
    <td>pop</td>
    <td>Remove top element</td>
  </tr>
</table>

The code below shows the STL Stack in action.
{% highlight c++ %}
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(8);
    s.push(4);
    cout << s.top();
    s.pop();

    if (!s.empty())
        s.pop();
}
{% endhighlight %}

{% ihighlight c++ %}stack<int> s{% endihighlight %} declares a stack of integers named {% ihighlight c++ %}s{% endihighlight %}. {% ihighlight c++ %}s.push(x){% endihighlight %} inserts elements into the stack, while {% ihighlight c++ %}s.pop(){% endihighlight %} removes elements from the stack. {% ihighlight c++ %}cout << s.top(){% endihighlight %} prints 4. To check if the stack is empty, {% ihighlight c++ %}s.empty(){% endihighlight %} is called.

<br/>

#### STL Queue
The STL Queue supports the following operations:
<table>
  <tr>
    <th>Member Function</th>
    <th>Definition</th>
  </tr>
  <tr>
    <td>empty</td>
    <td>Test whether container is empty</td>
  </tr>
  <tr>
    <td>size</td>
    <td>Return size</td>
  </tr>
  <tr>
    <td>front</td>
    <td>Access the next element</td>
  </tr>
  <tr>
    <td>back</td>
    <td>Access the last element</td>
  </tr>
  <tr>
    <td>push</td>
    <td>Insert element</td>
  </tr>
  <tr>
    <td>emplace</td>
    <td>Construct and insert element</td>
  </tr>
  <tr>
    <td>pop</td>
    <td>Remove top element</td>
  </tr>
</table>

The code below shows the STL Queue in action.
{% highlight c++ %}
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    q.push(8);
    q.push(4);
    cout << q.front();
    cout << q.back();
    q.pop();

    if (!s.empty())
        s.pop();
}
{% endhighlight %}

{% ihighlight c++ %}queue<int> q{% endihighlight %} declares a queue of integers named {% ihighlight c++ %}q{% endihighlight %}. {% ihighlight c++ %}q.push(x){% endihighlight %} inserts elements into the queue, while {% ihighlight c++ %}q.pop(){% endihighlight %} removes elements from the queue. {% ihighlight c++ %}cout << q.front(){% endihighlight %} prints 8, while {% ihighlight c++ %}cout << q.back(){% endihighlight %} prints 4. To check if the queue is empty, {% ihighlight c++ %}q.empty(){% endihighlight %} is called.

<br/>

#### STL Map
The STL Map supports the following operations:
<table>
  <tr>
    <th>Member Function</th>
    <th>Definition</th>
  </tr>
  <tr>
    <td>erase</td>
    <td>Erase elements</td>
  </tr>
  <tr>
    <td>clear</td>
    <td>Clear content</td>
  </tr>
  <tr>
    <td>find</td>
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
    q.erase("tommy");
}
{% endhighlight %}

{% ihighlight c++ %}map<string, int> age{% endihighlight %} declares a map with strings as keys and integers as values. {% ihighlight c++ %}age["tommy"] = 20{% endihighlight %} inserts the key, value pair "tommy" and 20 into the map, while {% ihighlight c++ %}age.erase(){% endihighlight %} removes the key, value pair from the map. {% ihighlight c++ %}cout << age["tommy"]{% endihighlight %} prints 20, while {% ihighlight c++ %}cout << age["oscar"]{% endihighlight %} prints 21.

