#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList_char.h"
#include <iostream>
#include <string>

class Queue : public LinkedList
{
public:
    Queue();    // Constructor
    ~Queue();   // Destructor
    void enqueue(char value);
    char dequeue();
    char& front();
};

#endif
