#include "stack.h"
#include <iostream>
#include <string>
using namespace std;

//default constructor
Stack::Stack()
    : LinekdList()
{
    top = last;
    bottom = first;
}

//destructor
Stack::~Stack()
{
    bottom = NULL;
    top = NULL;
}

//push
void Stack::push(char value)
{
    LinkedList::insertAtFront(value);
}

//pop
char Stack::pop()
{
    char popNum;
    popNum = top->val;
    LinkedList::removeFromFront();
    return popNum;
}

//top
char& top()
{
    return LinkedList::last;
}

void Stack::printStack()
{
    LinkedList::print();
}
