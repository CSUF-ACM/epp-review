---
title: Brief
permalink: /docs/pointers-references/brief/
---

### Pointers
A pointer is a variable type that store the address (or reference) of another variable type. Declaring a pointer is simple:

{% highlight c++ %}
int * myPointer;
{% endhighlight %}

The code above declares a pointer to an integer. When declaring a pointer, you must follow the sequence `Data Type That Will Be Pointed To`, `*`, `Name of Pointer Variable`. In this case, the data type that will be pointed to is indicated by {% ihighlight c++ %}int{% endihighlight %}, the {% ihighlight c++ %}*{% endihighlight %} follows, and the name of the pointer variable is {% ihighlight c++ %}myPointer{% endihighlight %}.  

To assign an address to the pointer, you must use the {% ihighlight c++ %}&{% endihighlight %} reference sign to obtain the address of the variable you want to assign it to, or use the C++ {% ihighlight c++ %}new{% endihighlight %} keyword.  

{% highlight c++ %}
int myVariable;
myPointer = &myVariables;
MyClass * classPointer = new MyClass();
{% endhighlight %}

The line {% ihighlight c++ %}myPointer = &myVariables{% endihighlight %} obtains the address of {% ihighlight c++ %}myVariable{% endihighlight %} with the {% ihighlight c++ %}&{% endihighlight %} and assigns it to {% ihighlight c++ %}myPointer{% endihighlight %}.  

The line {% ihighlight c++ %}MyClass * classPointer = new MyClass(){% endihighlight %} allocates a new memory space containing a {% ihighlight c++ %}MyClass{% endihighlight %} object, and assigns the address of the object to {% ihighlight c++ %}classPointer{% endihighlight %}.  

To dereference a pointer (to access the variable referenced by your pointer) simply put an {% ihighlight c++ %}*{% endihighlight %} next to the pointer.  

When working with classes or structs to reference members or methods, you have two options:
1. {% ihighlight c++ %}(*myPointer).method{% endihighlight %}
2. {% ihighlight c++ %}myPointer->method{% endihighlight %}

{% highlight c++ %}
*myPointer = 5;

myClassPointer->member = 5;
(*myClassPointer).method();
{% endhighlight %}

Taking a look at the code above, {% ihighlight c++ %}*myPointer = 5{% endihighlight %} sets the value at the address location {% ihighlight c++ %}myPointer{% endihighlight %} references to 5 (you may have to read that sentence a few times to understand ¯\\\_(ツ)_/¯ ). {% ihighlight c++ %}myClassPointer->member = 5{% endihighlight %} sets the class member of the class instance that {% ihighlight c++ %}myClassPointer{% endihighlight %} points to, to 5. {% ihighlight c++ %}(*myClassPointer).method(){% endihighlight %} calls the method of the class instance that {% ihighlight c++ %}myClassPointer{% endihighlight %} points to.  

Data manipulation can be done from either a pointer or the variable/object.  
{% highlight c++ %}
*myPointer = 3;
cout << myVariable << endl;
myVariable = 4;
cout << *myPointer << endl;
{% endhighlight %}
The line {% ihighlight c++ %}cout << myVariable << endl{% endihighlight %} will print a 3 and the line {% ihighlight c++ %}cout << *myPointer << endl{% endihighlight %} will print a 4.

### References
A reference can be thought of as a joint clone to another variable or object and is denoted by {% ihighlight c++ %}&{% endihighlight %}

{% highlight c++ %}
int aNumber = 10;
int & myReference = aNumber;
{% endhighlight %}

The code above created a reference to an int called {% ihighlight c++ %}myReference{% endihighlight %} and initialize it to aNumber. The object or variable that a reference references, can have it's data directly manipulated without needing to dereference. Note: a reference must be initialized when it is declared, otherwise it will not compile.

{% highlight c++ %}
int myVariable;
int & myReference = myVariables;

myReference = 3;
cout << myVariable << endl;
myVariable = 4;
cout << myReference << endl;
{% endhighlight %}

The line {% ihighlight c++ %}cout << myVariable << endl{% endihighlight %} will print a 3 and the line {% ihighlight c++ %}cout << myReference << endl{% endihighlight %} will print a 4.

_Not as commonly used as pointers (are unique to C++)._


### Passing Arguments By Reference Or By Value
<div class="image">
    <a href="{{ "/img/value-reference.gif" | prepend: site.baseurl }}"><img src="{{ "/img/value-reference.gif" | prepend: site.baseurl }}" class="center"></a>
</div>

Most simple function calls pass arguments by value. This means that when a function is called, it copies the value of the variable passed in, and never changes the value of the variable passed in itself.

{% highlight c++ %}
int add(int a)
{
    a = a + 2;
    return a;
};

int myVar = 6;

cout << add(myVar) << endl;
cout << myVar << endl;
{% endhighlight %}

The lines {% ihighlight c++ %}cout << add(myVar) << endl{% endihighlight %} and {% ihighlight c++ %}cout << myVar << endl{% endihighlight %} print 8 and 6 respectively. {% ihighlight c++ %}myVar{% endihighlight %} ends up being 6 because it was not passed by reference.

If a function has an argument by reference, it means it takes the address of the variable passed in, and the function now has the ability to manipulate the variable since it knows its memory address'.

{% highlight c++ %}
int add2(int &a)
{
    a = a + 2;
    return a;
};

int myVar = 6;


cout << add2(myVar) << endl;
cout << myVar << endl;
{% endhighlight %}

With the modification of passing by reference, now the lines {% ihighlight c++ %}cout << add(myVar) << endl{% endihighlight %} and {% ihighlight c++ %}cout << myVar << endl{% endihighlight %} print 8.
