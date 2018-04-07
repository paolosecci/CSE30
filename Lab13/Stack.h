#include "LinkedList.h"

template <class T>
class Stack: public LinkedList<T>
{
public:
    Stack();
    ~Stack();
    void push(T value);
    T pop();
    T& top();
};

template <class T>
Stack<T>::Stack()
{
}

template <class T>
Stack<T>::~Stack()
{
}

template <class T>
void Stack<T>::push(T value)
{
    LinkedList<T>::insertAtFront(value);
}

template <class T>
int Stack<T>::pop()
{
    T tVal = LinkedList<T>::first->val;
    LinkedList<T>::removeFromFront();
    return tVal;
}

template <class T>
T Stack<T>::top()
{
    return LinkedList<T>::first->val;
}
