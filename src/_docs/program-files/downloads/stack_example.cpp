
#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    // Create an empty stack of data type int.
    Stack<int> stack;

    // Push 1 into stack.
    if (stack.push(1))
        cout << 1 << " successfully pushed.\n";
    else
        cout << "failed to push " << 1 << endl;

    // Push 2 into stack.
    if (stack.push(2))
        cout << 2 << " successfully pushed.\n";
    else
        cout << "failed to push " << 2 << endl;

    // Push 3 into stack.
    if (stack.push(3))
        cout << 3 << " successfully pushed.\n";
    else
        cout << "failed to push " << 3 << endl;

    // Retrieve top element of stack.
    int retrievedNumber;
    if (stack.top(retrievedNumber))
        cout << "Top element: " << retrievedNumber << endl;
    else
        cout << "No Top element.\n";

    // Pop element from stack.
    if (stack.pop())
        cout << "Element popped.\n";
    else
        cout << "Unable to pop.\n";

    // Retrieve top element from stack.
    if (stack.top(retrievedNumber))
        cout << "Top element: " << retrievedNumber << endl;
    else
        cout << "No Top element.\n";

    // Check if stack is empty.
    if (stack.is_empty())
        cout << "Stack is empty.\n";
    else
        cout << "Stack is not empty.\n";

    // Pop element from stack.
    if (stack.pop())
        cout << "Element popped.\n";
    else
        cout << "Unable to pop.\n";

    // Pop element from stack.
    if (stack.pop())
        cout << "Element popped.\n";
    else
        cout << "Unable to pop.\n";

    // Check if stack is empty.
    if (stack.is_empty())
        cout << "Stack is empty.\n";
    else
        cout << "Stack is not empty.\n";

}


