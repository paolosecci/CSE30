#include "stack.h"
#include <iostream>
#include <string>
using namespace std;

//default constructor
Stack::Stack():LinkedList()
{
}

//destructor
Stack::~Stack()
{
}

//push
void Stack::push(int value)
{
    LinkedList::insertAtFront(value);
}

//pop
int Stack::pop()
{
    int popNum = LinkedList::first->val;
    LinkedList::removeFromFront();
    return popNum;
}

//top
int& Stack::top()
{
    return LinkedList::first->val;
}

//print
void Stack::printStack()
{
    LinkedList::print();
}
