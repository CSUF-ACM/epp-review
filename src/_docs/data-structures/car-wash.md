---
title: Car Wash Program
permalink: /docs/data-structures/car-wash/
---
Use the provided files under the <a href="{{ site.baseurl }}{% link _docs/data-structures/files.md %}">Car Wash Files</a> tab, create a program that checks in and out customers at a car wash.

### Specifics
Upon running the program, the user will be greeted with a menu with the following functions:

- __Check in:__ Checks in the customer. The user will be asked to insert the name of the customer, the license plate number, and whether or not the customer wants a premium wash.
- __Check out:__ Checks out the next customer. A notification stating which customer has been checked out will be displayed. Checked out customers will be stored in a history database.
- __Search:__ Searches the history database for a customer. The customer's details will be printed.
- __Quit:__ Checks out the remaining customers, erases the history, and exits the program.

Use the appropriate data structures. You can use the data structures found under the <a href="{{ site.baseurl }}{% link _docs/data-structures/files.md %}">Car Wash Files</a> tab, or use the C++ STL.  

Utilize the <a href="{{ site.baseurl }}{% link _docs/program-files/customer.md %}" target="_blank">customer.h</a> header file to create customer objects. Traits of customers include their name, license plate number, and their wash preference.

Sample programs that utilize the three data structures have been provided. You can view them under the **Examples** section of the <a href="{{ site.baseurl }}{% link _docs/data-structures/files.md %}">Car Wash Files</a> tab.

### Sample Output
##### User Input is surrounded by [ ]
```
1) Check in
2) Check out
3) Search
4) Quit
Input: [1]

Name: [Oscar Olazabal]
License Plate: [QWERTY1]
Premium Wash? (y/n): [y]
Customer checked in

1) Check in
2) Check out
3) Search
4) Quit
Input: [1]

Name: [Charles Bucher]
License Plate: [POIU123]
Premium Wash? (y/n): [y]
Customer checked in

1) Check in
2) Check out
3) Search
4) Quit
Input: [1]

Name: [William Clemons]
License Plate: [ASD12FD]
Premium Wash? (y/n): [n]
Customer checked in

1) Check in
2) Check out
3) Search
4) Quit
Input: [1]

Name: [Bill Nye]
License Plate: [GHJ34LD]
Premium Wash? (y/n): [n]
Customer checked in

1) Check in
2) Check out
3) Search
4) Quit
Input: [3]

Name: [Oscar Olazabal]

Customer not found.

1) Check in
2) Check out
3) Search
4) Quit
Input: [2]

Oscar Olazabal checked out.

1) Check in
2) Check out
3) Search
4) Quit
Input: [3]

Name: [Oscar Olazabal]

Name: Oscar Olazabal
License Plate Number: QWERTY1
Premium Wash: Yes

1) Check in
2) Check out
3) Search
4) Quit
Input: [2]

Charles Bucher checked out.

1) Check in
2) Check out
3) Search
4) Quit
Input: [3]

Name: [Charles Bucher]

Name: Charles Bucher
License Plate Number: POIU123
Premium Wash: Yes

1) Check in
2) Check out
3) Search
4) Quit
Input: [4]

Checking out William Clemons
Checking out Bill Nye
Exiting program...
```