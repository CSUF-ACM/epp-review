---
layout: file
title:  "main.cpp"
---

{% highlight c++ %}
#include <iostream>
#include <string>
#include "customer.h"

using namespace std;

void Menu();      // Menu that displays options.
void CheckIn();   // Check in a customer.
void CheckOut();  // Remove customer from list.
void Search();    // Search for a customer.
void Quit();      // Quit program.

int main() {
    bool loop = true;
    int selection;

    do {
        Menu();
        cout << "Input: ";
        cin >> selection;
        cin.ignore();

        switch (selection)
        {
        case 1:
            cout << endl;
            CheckIn();
            cout << endl;
            break;
        case 2:
            cout << endl;
            CheckOut();
            cout << endl;
            break;
        case 3:
            cout << endl;
            Search();
            cout << endl;
            break;
        case 4:
            cout << endl;
            Quit();
            loop = false;
            cout << "Exiting program...\n";
            break;
        default:
            break;
        }

    } while (loop);
}

void Menu() {
    cout << "1) Check in\n";
    cout << "2) Check out\n";
    cout << "3) Search\n";
    cout << "4) Quit\n";
}

void CheckIn() {

}

void CheckOut() {

}

void Search() {

}

void Quit() {

}
{% endhighlight %}