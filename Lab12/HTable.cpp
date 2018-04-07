#include "HTree.h"
#include <iostream>

//default constructor
HTree:HTree()
{
    max_size = 23;
    dt->key = -1;
    dt->value = "N/A";
    numel = 0;
}

//4arg constructor
HTree::~HTree(int t_size)
{
    max_size = t_size;
    dt->key = -1;
    dt->value = "N/A";
    numel = 0;
}

//destructor
HTree::~HTree()
{
    delete dt;
    delete max_size;
    delete numel;
}

//"getHash()"
int HTree::hash(int& k)
{
    return (k % max_size);
}

//rehash
int HTree::rehash(int& k)
{
    return (k+1) % max_size
}

//add
int HTree::add(data& d)
{
    if (numel == max_size) //Htree is full
    {
        return -1;
    }
    
    while (count < max_num)
    {
        if (d->key == -1) //spot is available
        {
            dt->key = d->key;
            dt->value = d->value;
        }
        else //spot is unavailable
        {
            rehash(d->key);
            count++
        }
    }
}

int HTree::remove(data* d)
{
    delete d;
}

//SEARCH
void HTree::output()
{
    for (int i = 0; i < numel; i++)
    {
        cout << i << " -> " << dt->key << " " << dt->value << endl;
        rehash();
    }
}

