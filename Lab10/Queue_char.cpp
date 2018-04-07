#include "Queue_char.h"
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

//push
void Queue::enqueue(char value)
{
    LinkedList::insertAtBack(value);
}

//pop
char Queue::dequeue()
{
    char deqChar = LinkedList::top->val;
    LinkedList::removeFromFront();
    return deqChar;
}

//top
char& Queue::front()
{
    return LinkedList::first->val;
}

void Queue::printQueue()
{
    LinkedList::print();
}
