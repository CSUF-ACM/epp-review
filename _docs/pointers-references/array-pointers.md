---
title: Array of Pointers
permalink: /docs/pointers-references/array-pointers/
---

Create an array of {% ihighlight c++ %}Person{% endihighlight %} pointers; Use the following {% ihighlight c++ %}Person{% endihighlight %} struct definition:

{% highlight c++ %}
struct Person {
    string name;
    int age;
};
{% endhighlight %}

Allocate an array of size 3 and have each element of the array point to a unique instance of a Person struct. Then use the array of pointers to print the instances of Person.

Sample Output:
```
Oscar, 21
Tommy, 20
Vegeta, 9001
```