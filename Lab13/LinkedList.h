#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;

// Representation of an element in the linked list
template<class T>
struct Node
{
    T val; // Value of the node
    Node *next; // Pointer to the next node
};

template<class T>
class LinkedList {
    // Public Functions/Variables
    public:
        /* IMPLEMENT THESE FUNCTIONS FOR EXERCISE1 */
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(T valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();

        /* IMPLEMENT THSES FUNCTIONS FOR EXERCISE2 */
        void insertAtFront(T valueToInsert);
        bool removeFromFront();

        Node<T> *first; // Pointer pointing to the begining of the list
        Node<T> *last; // Pointer pointing to the end of the list
};

template <class T>
LinkedList<T>::LinkedList()
{
    first = NULL;
    last = NULL;
}

template <class T>
LinkedList<T>::~LinkedList()
{
}

template <class T>
void LinkedList<T>::insertAtBack(T value)
{
    Node<T>* NewNode = new Node<T>();
    NewNode ->val = value;
    NewNode->next = NULL;
    
    if (first == NULL)
    {
      first = NewNode;
    }
    if (last == NULL)
    {
        last = NewNode;
    }
    else
    {
        last->next = NewNode;
        last = NewNode;
    }
}

template <class T>
bool LinkedList<T>::removeFromBack()
{
    if (first == NULL)
    {
        return false;
    }
    if (first == last)
    {
        delete [] first;
        first = NULL;
        last = NULL;
        return true;
    }
    else
    {
        Node<T>* sNode = first;
        while (sNode->next != last)
        {
            sNode = sNode->next;
        }
        
        delete [] last;
        last = sNode;
        last->next = NULL;
        return true;
    }
}

template <class T>
void LinkedList<T>::print()
{
    Node<T>* pNode = first;
    while (pNode != NULL)
    {
        cout << pNode->val;
        
        if(pNode->next != NULL)
        {
            cout << ", ";
            pNode = pNode->next;
            continue;
        }
        else
        {
            break;
        }
    }
}

template <class T>
bool LinkedList<T>::isEmpty()
{
    return first == NULL;
}

template <class T>
int LinkedList<T>::size()
{
    Node<T>* tNode = first;
    int count = 0;
    while (tNode != NULL)
    {
        count++;
        tNode = tNode->next;
    }
    return count;
}

template <class T>
void LinkedList<T>::clear()
{
    if(first == NULL)
    {
        return;
    }
    if(first == last)
    {
        delete [] first;
        first = NULL;
        last = NULL;
    }
    else
    {
        Node<T>* nNode = first;
        while (nNode != NULL)
        {
            nNode = first->next;
            delete [] first;
            first = nNode;
        }
        first = NULL;
        last = NULL;
    }
}

template <class T>
void LinkedList<T>::insertAtFront(T num)
{
  Node<T>* eNode = new Node<T>;
  eNode->val = num;
  eNode->next = first;
  first = eNode;
}

template <class T>
bool LinkedList<T>::removeFromFront()
{
  Node<T>* pNode = first;
  first = pNode->next;
  delete [] pNode;
}


#endif

