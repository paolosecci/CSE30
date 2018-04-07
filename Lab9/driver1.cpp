#include "stack.h"
#include <iostream>
using namespace std;

Stack firstStack;
firstStack.push(1);
firstStack.push(2);
firstStack.push(3);
firstStack.push(4);
firstStack.push(5);
firstStack.push(6);
firstStack.push(7);
firstStack.push(8);
firstStack.push(9);
firstStack.push(10);

cout << "here is the stack: " << endl;
firstStack.print();


firstStack.top();
firstStack.pop();

cout << LinkedList::size() << endl;
if(LinkedList::isEmpty())
{
    cout << "stack is empty" << endl;
}
else
{
    cout << "stack is not empty" << endl;
}


cout << "here is the stack: " << endl;
firstStack.print();
