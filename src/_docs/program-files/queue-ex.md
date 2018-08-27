---
layout: file
title:  "Queue Example"
---
<a href="{{ site.baseurl }}{% link _docs/program-files/downloads/queue_example.cpp%}" download="queue_example.cpp" class="btn btn-primary">Download</a>

{% highlight c++ %}
#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    // Create an empty queue of data type int.
    Queue<int> queue;

    // Enqueue 1.
    if (queue.enqueue(1))
        cout << 1 << " successfully queued.\n";
    else
        cout << "failed to queue " << 1 << endl;

    // Enqueue 2.
    if (queue.enqueue(2))
        cout << 2 << " successfully queued.\n";
    else
        cout << "failed to queue " << 2 << endl;

    // Enqueue 3.
    if (queue.enqueue(3))
        cout << 3 << " successfully queued.\n";
    else
        cout << "failed to queue " << 3 << endl;

    // Get front element of queue.
    int retrievedNumber;
    if (queue.get_front(retrievedNumber))
        cout << "Front element: " << retrievedNumber << endl;
    else
        cout << "No front element.\n";

    // Get back element of queue.
    if (queue.get_back(retrievedNumber))
        cout << "Back element: " << retrievedNumber << endl;
    else
        cout << "No back element.\n";

    // Dequeue an element.
    if (queue.dequeue())
        cout << "Element dequeued.\n";
    else
        cout << "Unable to dequeue.\n";

    // Get front element of queue.
    if (queue.get_front(retrievedNumber))
        cout << "Front element: " << retrievedNumber << endl;
    else
        cout << "No front element.\n";

    // Get back element of queue.
    if (queue.get_back(retrievedNumber))
        cout << "Back element: " << retrievedNumber << endl;
    else
        cout << "No back element.\n";

    // Check if queue is empty.
    if (queue.is_empty())
        cout << "Queue is empty.\n";
    else
        cout << "Queue is not empty.\n";

    // Dequeue an element.
    if (queue.dequeue())
        cout << "Element dequeued.\n";
    else
        cout << "Unable to dequeue.\n";

    // Dequeue an element.
    if (queue.dequeue())
        cout << "Element dequeued.\n";
    else
        cout << "Unable to dequeue.\n";

    // Check if queue is empty.
    if (queue.is_empty())
        cout << "Queue is empty.\n";
    else
        cout << "Queue is not empty.\n";
}
{% endhighlight %}

# Sample Output
```
2 successfully queued.
1 successfully queued.
3 successfully queued.
Front element: 1
Back element: 3
Element dequeued.
Front element: 2
Back element: 3
Queue is not empty
Element dequeued.
Element dequeued.
Queue is empty.
```
