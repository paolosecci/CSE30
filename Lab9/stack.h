#ifndef STACK_H
#define STACK_H

#include "LinkedList.H"
#include <iostream>
#include <string>

class Stack : public LinkedList
{
public:
    Stack();    // Constructor
    ~Stack();   // Destructor
    void push(int value);
    int pop();
    int& top();
};

#endif
