#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.H"
#include <iostream>
#include <string>

class Queue : public LinkedList
{
public:
    Queue();    // Constructor
    ~Queue();   // Destructor
    void enqueue(int value);
    int dequeue();
    int& front();
};

#endif
