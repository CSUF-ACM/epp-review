---
title: Brief
permalink: /docs/files/brief/
---

### File Basics
C++ provides the {% ihighlight c++ %}fstream{% endihighlight %} (file stream) library to perform output and input of characters to/from files. The library presents us with two objects:
- **ofstream**: Stream class to write to files (output file stream)
- **ifstream**: Stream class to read from files (input file stream)

To create {% ihighlight c++ %}ifstream{% endihighlight %} objects and {% ihighlight c++ %}ofstream{% endihighlight %} objects we write the following code:

{% highlight c++ %}
#include <fstream>

int main() {
    ifstream inFile;  // For reading from a file
    ofstream outFile; // For writing to a file
}
{% endhighlight %}

To modify files, it is required to open them. Once your modifications are done, you can close the file.

{% highlight c++ %}
#include <iostream>
#include <fstream>

int main() {
    ifstream inFile;  // For reading from a file
    ofstream outFile; // For writing to a file

    inFile.open("myFile.txt");   // Open file to read from it
    // Read from file

    outFile.open("myFile.txt");  // Open file to write to it
    // Write to file
}
{% endhighlight %}

For the case of {% ihighlight c++ %}inFile{% endihighlight %}, you must open a file by calling the object's {% ihighlight c++ %}open{% endihighlight %} method before performing read operations on it.

Once you are done operating on your file, you are to close the file.

{% highlight c++ %}
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;  // For reading from a file
    ofstream outFile; // For writing to a file

    inFile.open("myFile.txt");   // Open file to read from it
    // Read from file
    inFile.close();              // Close the file

    outFile.open("myFile.txt");  // Open file to write to it
    // Write to file
    outFile.close();             // Close the file
}
{% endhighlight %}

When one does not want to access data that is past the end of the file, use {% ihighlight c++ %}inFile.eof(){% endihighlight %} which returns a boolean representing whether the end of the file has been reached.

### Writing to Files
With an {% ihighlight c++ %}ofstream{% endihighlight %} object, you are able to write to files.

{% highlight c++ %}
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open the file
    ofstream outFile;
    outFile.open("myFile.txt");

    double doubleNum = 2.0;
    int intNum = 5;

    // Write the values to the file
    outFile << doubleNum << " " << intNum << endl;

    // Write a sentence to the file
    string sentence = "I love C.S. (communication studies).";
    outFile << sentence;

    outFile.close();
}
{% endhighlight %}

The code above opens {% ihighlight c++ %}myFile.txt{% endihighlight %} using the {% ihighlight c++ %}ofstream{% endihighlight c++ %} object {% ihighlight c++ %}outFile{% endihighlight %}. It then writes the values of {% ihighlight c++ %}doubleNum{% endihighlight %} and {% ihighlight c++ %}intNum{% endihighlight %} into the file. Notice that between writing the values into the file, a whitespace is written. This is done so that the numbers are kept separate and could be read back individually. Following the new line, a full sentence is then written to the file.

### Reading From Files
With an {% ihighlight c++ %}ifstream{% endihighlight %} object, you are able to read from files. There are multiple ways of approaching this:

{% highlight c++ %}
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open the file
    ifstream inFile;
    inFile.open("myFile.txt");

    double doubleNum;
    int intNum;

    // Read from the file until we hit any white space (good for space-delimited data)
    inFile >> doubleNum >> intNum;
    cout << doubleNum + intNum << endl;

    string sentence;

    // Read from inFile until we reach a '\n' (the whole sentence)
    getline(inFile, sentence);
    cout << sentence;

    // Close the file when we're done
    inFile.close();
}
{% endhighlight %}

The code above opens {% ihighlight c++ %}myFile.txt{% endihighlight %} using the ifstream object {% ihighlight c++ %}inFile{% endihighlight %}. It then reads in the values 2 and 5 into {% ihighlight c++ %}doubleNum{% endihighlight %} and {% ihighlight c++ %}intNum{% endihighlight %} respectively. To read a line from the the file, the {% ihighlight c++ %}getline(){% endihighlight %} function is used.

### Writing and Reading Binary Objects 
Applying what we learned above, we will read and write binary objects into and out of a file.

{% highlight c++ %}
#include <iostream>
#include <fstream>

using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    // Declare & initialize object
    Person p1;
    p1.name = "Tommy";
    p1.age = 20;

    // Write object to file
    ofstream outFile;
    outFile.open("myFile.bin", ios::app);
    outFile.write((char*)&p1, sizeof(p1));
    outFile.close();

    // Read object from file
    ifstream inFile;
    Person p2;
    inFile.open("myFile.bin", ios::in);
    inFile.read((char*)&p2, sizeof(p2));

    cout << p2.name << " " << p2.age << endl;
}
{% endhighlight %}

There are a few differences when dealing with binary objects. When you plan on writing an object to a file, you need to specify you will be appending to the file by including the {% ihighlight c++ %}ios::app{% endihighlight %} flag in the {% ihighlight c++ %}open{% endihighlight %} method. When writing, you will pass two parameters to the {% ihighlight c++ %}read{% endihighlight %} method: a character pointer to your object and the size of the object.
