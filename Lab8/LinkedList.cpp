 #include "LinkedList.H"
#include <cstdlib>
#include <iostream>

using namespace std;

//default constructor
LinkedList::LinkedList()
{
    first = NULL;
    last = NULL;
}

//destructor
LinkedList::~LinkedList()
{
    first = NULL;
}

//adds Node to end of LL
void LinkedList::insertAtBack(int valueToInsert)
{
    Node* n = new Node;
    n->val = valueToInsert;
    n->next = NULL;
    
    if(first != NULL)
    {
        last = first;
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = n;
        last = n;
    }
    else
    {
        first = n;
        last = first;
    }
}

//removes last Node is LL
bool LinkedList::removeFromBack()
{
    if(isEmpty())
    {
        return false;
    }
    
    if(first->next == NULL)
    {
        delete first;
        first = NULL;
        
        return true;
    }
    else
    {
        Node *nextToLast = first;
        last = first->next;
        while (last->next != NULL)
        {
            nextToLast = last;
            last = last->next;
        }
        delete last;
        nextToLast->next = NULL;
        last = nextToLast;
        
        return true;
    }
}

//prints LL
void LinkedList::print()
{
    if(!isEmpty())
    {
        last = first;
        while (last != NULL)
        {
            cout << last->val << ",";
            last = last->next;
        }
    }
}

//returns bool for is LL is empty
bool LinkedList::isEmpty()
{
    return (first == NULL);
}

//returns size of LL
int LinkedList::size()
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        int listSize = 1;
        last = first;
        while(last->next != NULL)
        {
            last = last->next;
            listSize++;
        }
        
        return listSize;
    }
}

//clears LL
void LinkedList::clear()
{
    first = NULL;
}

//adds Node at beginning of LL
void LinkedList::insertAtFront(int num)
{
    Node* n = new Node;
    n->val = num;
    n->next = first;
    first = n;
}

//removes first Node from LL
bool LinkedList::removeFromFront()
{
    if(isEmpty())
    {
        return false;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
        
        return true;
    }
    else
    {
        Node* temp = first;
        first = first->next;
        
        delete temp;
        return true;
    }
}
