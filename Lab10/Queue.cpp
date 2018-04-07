#include "Queue.h"
#include <iostream>
#include <string>
using namespace std;

//default constructor
Queue::Queue():LinkedList()
{
}

//destructor
Queue::~Queue()
{
}

//enqueue
void Queue::enqueue(int value)
{
    LinkedList::insertAtBack(value);
}

//dequeue
int Queue::dequeue()
{
    int deqNum = LinkedList::first->val;
    LinkedList::removeFromFront();
    return deqNum;
}

//front
int& Queue::front()
{
    return LinkedList::first->val;
}

void Queue::printQueue()
{
    LinkedList::print();
}
