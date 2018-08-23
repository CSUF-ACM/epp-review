---
title: Brief
permalink: /docs/recursion/brief/
---

### Defining Recursion
In general, recursion is defined as the repeated application of a recursive procedure. In computer science, is a programming technique involving the use of a function that calls itself one or more times until a specific condition (commonly known as the base case) is met at which time the rest of each repeition is processed from the last one called to the first. Concretely, it is a method of solving a problem where the solution depends on solutions to smaller instances of the same problem.  

### Prototyping
A recursive function has one or more base cases and one or more recursive calls.  

A recursive call is a portion of the function that calls itself in order to get closer to solving the problem. Recursive calls are commonly terminated by a base case; when it has reached a wanted condition.  

A base case is a portion of the function that produces a result trivially. The base case is normally reached after a certain number of recursive calls.  

The following is represents a typical format for a recursive function:
{% highlight c++ %}
foo(/*params...*/)
{
    //Base step(s)
        //Return value(s) that doesn’t call foo()
        //This is the value(s) we are in some way approaching
	
    //Recursive step(s)
        //Return value(s) that does call foo()
        //Move the value(s) in the foo() call towards the base case
}
{% endhighlight %}

### Factorial
<div class="image">
    <a href="{{ "/img/factorial.gif" | prepend: site.baseurl }}"><img src="{{ "/img/factorial.gif" | prepend: site.baseurl }}" class="center"></a>
</div>

A factorial is the product of an integer and all the integers below it. For example, factorial for (denoted as 4!) is equal to 4\*3\*2\*1 = 24. The code below is a recursive function definition for calculating a factorial.

{% highlight c++ %}
int factorial(int n) {
    // Recursive call
    if(n > 1)
        return n * factorial(n - 1);
    // Base case
    return 1;
}
{% endhighlight %}

If one were to make the function call {% ihighlight c++ %}factorial(4){% endihighlight %}, the function would execute like the following:
1. First it calculates {% ihighlight c++ %}factorial(4){% endihighlight %}. Since {% ihighlight c++ %}n{% endihighlight %} = 4, the *recursive case* is __true__. Therfore factorial(4) equals {% ihighlight c++ %}4 * factorial(3){% endihighlight %}. But now it needs to calculate {% ihighlight c++ %}factorial(3){% endihighlight %} to finish the problem.
2. It then calculates {% ihighlight c++ %}factorial(3){% endihighlight %}. Since {% ihighlight c++ %}n{% endihighlight %} = 3, the *recursive case* is __true__. Therfore factorial(3) equals {% ihighlight c++ %}3 * factorial(2){% endihighlight %}. But now it needs to calculate {% ihighlight c++ %}factorial(2){% endihighlight %} to finish the problem.
3. {% ihighlight c++ %}factorial(2){% endihighlight %} is then calculated. Since {% ihighlight c++ %}n{% endihighlight %} = 2, the *recursive case* is __true__. Therfore factorial(2) equals {% ihighlight c++ %}2 * factorial(1){% endihighlight %}. But now it needs to calculate {% ihighlight c++ %}factorial(1){% endihighlight %} to finish the problem.
4. Finally, it calculates {% ihighlight c++ %}factorial(1){% endihighlight %}. Since {% ihighlight c++ %}n{% endihighlight %} = 1, the *base case* is __true__. Therfore factorial(1) equals {% ihighlight c++ %}1{% endihighlight %}. We've reached an endpoint and are now able to calculate {% ihighlight c++ %}factorial(2){% endihighlight %} completely to finish the problem.
5. Since the value of {% ihighlight c++ %}factorial(1){% endihighlight %} is 1, the calculation in step 3 for {% ihighlight c++ %}factorial(2){% endihighlight %} can finish. {% ihighlight c++ %}factorial(2){% endihighlight %} = 2\*1 = 2.
5. Now that it knows that the value of {% ihighlight c++ %}factorial(2){% endihighlight %} is 2, the calculation in step 2 for {% ihighlight c++ %}factorial(3){% endihighlight %} can finish. {% ihighlight c++ %}factorial(3){% endihighlight %} = 3\*2 = 6
5. And finally, since {% ihighlight c++ %}factorial(3){% endihighlight %} is 6, the calculation in step 1 for {% ihighlight c++ %}factorial(4){% endihighlight %} can finish. {% ihighlight c++ %}factorial(4){% endihighlight %} = 4\*6 = 24.

### Fibonacci
<div class="image">
    <a href="{{ "/img/fib.gif" | prepend: site.baseurl }}"><img src="{{ "/img/fib.gif" | prepend: site.baseurl }}" class="center"></a>
</div>

Another popular function is the recursive fibonacci. The Fibonacci series is a series of numbers in which each number is the sum of the two preceding numbers. Ex. 1, 1, 2, 3, 5, 8, etc. The fourth fibonacci number in this series if 3.

The code below is a recursive function definition for calculating the nth fibonacci number.

{% highlight c++ %}
int fib(int n) {
    //Base case
    if(n == 1 || n == 2)
        return 1;
    // Recursive call
    return fib(n - 1) + fib(n - 2);
}
{% endhighlight %}

Walk through the each line of code and see why it works.
