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
    void push(char value);
    char pop();
    char& top();
    
private:
    Node* top;
    Node* bottom;
};

#endif
