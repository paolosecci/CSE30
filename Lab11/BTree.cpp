#include <iostream>
#include "BTree.h"

//default constructor
BTree::BTree()
{
    root = NULL;
}

//destructor
BTree::~BTree()
{
    destroy_tree(root);
}

//"getRoot()"
{
    return root;
}

//DESTROY_TREE
void BTree::destroy_tree(Node *leaf)
{
    if(leaf != NULL)
    {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
        
    }
}
void BTree::destroy_tree()
{
    destroy_tree(root);
}

//INSERT
void BTree::insert(int key, Node *leaf)
{
    if(leaf == NULL)
    {
        insert(key);
    }
    else if(key < leaf->key_value)
    {
        insert(key, leaf->left);
    }
    else
    {
        insert(key, leaf->right);
    }
}
void BTree::insert(int key)
{
    if(root == NULL)
    {
        Node* n = new Node;
        n->key_value = key;
        n->left = NULL;
        n->right = NULL;
    }
    else
    {
        insert(key, root);
    }
}

//SEARCH
Node* BTree::search(int key, Node *leaf)
{
    if(key == leaf->key_value)
    {
        return leaf;
    }
    else if(key < leaf->key_value)
    {
        search(key, leaf->left);
    }
    else if(key > leaf->key_value)
    {
        search(key, leaf->right);
    }
    else
    {
        return NULL;
    }
}
Node* BTree::search(int key)
{
    search(key, root);
}
