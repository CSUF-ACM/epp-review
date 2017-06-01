# Files #

1. Create a variable of ifstream, ofstream, or fstream

```C++
#include <fstream> //This is only header needed. ofstream & ifstream included

ifstream filename; //for reading from a file
ofstream filename; //for writing to a file
fstream filename; //for both reading and writing at the same time
```
 
2. Attach it to an actual file somewhere on the hard drive or other secondary storage. Open it.
(for ofstream/ifstream files, the actual file doesn’t need to exist beforehand)

```C++ 
inFile.open(“testFile.txt”); //Or outFile.open(“testFile.txt”);
ifstream inFile(“testFile.txt”); //Or ofstream outFile(“testFile.txt”);
```
3. Reading from a file

```C++
ifstream filename;
filename.open(“myFile.txt”);

filename.get(); //reads one character
char letter;
filename >> letter; //Stores the character at the pointer into ‘letter’
filename.get(letter); //Stores the character at the pointer into ‘letter’
filename.get(); //Returns character at the pointer
string word;
filename >> word; //Stores the word at the pointer into ‘word’
string line;
getline(filename, line); //Stores the line at the pointer into ‘line’
const int size = 80;
char buffer[size];
cin.get(buffer, size); 
```

4. Writing from a file

```C++
ofstream filename;
filename.open(“myFile.txt”);

char letter;
filename << letter; //Writes a letter at the pointer
filename.put(letter); //Writes a letter at the pointer
string word_or_line;
filename << word_or_line; //Writes a word (or a line) at the pointer
```

5. Clearing a file
    - If you have a file you would like to clear, open as an ofstream file, and the system will clear it out.

6. Miscellaneous file commands

    - Flags for opening a file:
      - `ios::out`, `ios::in`, `ios::binary`
      - use pipe `|` command to join multiple flags
      
     - Change the pointer:
          ```C++
          filename.seekg(index); //Used for reading (g for get). Where index is location in filename.
          filename.seekp(index); //Used for writing (p for put). Where index is location in filename.
          ```

      - Close the file
        - `filename.close();`

      - Ensure file is open
        - `filename.is_open();`

      - Don’t try to access data past the end of file (eof)
        - `filename.eof();`

      - Common example loop to get all information from a file:
          ```C++
          string line;
          if(filename.is_open())
          {
            while(getline(filename, line))
            {
              cout << line << endl;
            }
          }
          ```
----
----

# Problems #

1. Create a file using ifstream, write anything you want to it, and then open that same file using ofstream, and 
read what you just wrote to it. Clear the file when you are done with it.
    - Implement this exact same problem using different calls/loops
2. Create (outside of a .cpp file), a text file with a sequence of 5 numbers. Create a 5 integer array within a 
.cpp file, open the text file, and then assign the array to the numbers within the file.
    - Change the values of those variables, and then override the values originally within the file with the new values.
3. Create (outside of a .cpp file), a text file with at least 4 lines of random text. Modify each odd numbered line 
at the beginning with “I am odd ” and each even numbered line at the beginning with “I am not ”.
