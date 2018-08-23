---
title: Passing by Reference
permalink: /docs/pointers-references/reference-parameters/
---
Create a function that can raise an integer to a specified power. The function has two parameters; the first parameter being the base and the second parameter being the exponent. 

The function should not return anything and the result should be stored in the base first variable.

{% highlight c++ %}
void power(int &base, int exp) {
    // . . .
}
{% endhighlight %}