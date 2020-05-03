/*
 Copyright (c) 2016 Boris Misljencevic

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
*/

#include "../include/binarytree.h"

Tree::Tree()
{
    root = NULL;
}

Tree::~Tree()
{
    destroy_leaf(root);
}

void Tree::destroy_leaf(node * leaf)
{
    if (leaf != NULL) 
    {
        destroy_leaf(leaf->left);
        destroy_leaf(leaf->right);
    }
}

void Tree::insert(int val)
{
    // public insert function
    insert(val, root);
}
    
void Tree::insert(int val, node * leaf)
{
    // Add a new node to the tree
    if (root == NULL)
    {
        // root node doesn't exist yet
        root = new NODE;
        root->data = val;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (val < leaf->data)
        {
            // insert a leaf to the left 
            if (leaf->left != NULL) 
            {
                insert(val, leaf->left);
            }
            else
            {
                leaf->left = new NODE;
                leaf->left->data = val;
                leaf->left->left = NULL;    //Sets the left child of the child node to null
                leaf->left->right = NULL;   //Sets the right child of the child node to null
            }   
        }
        else 
        {
            // insert a leaf to the right 
            if (leaf->right != NULL) 
            {
                insert(val, leaf->right);
            }
            else
            {
                leaf->right = new NODE;
                leaf->right->data = val;
                leaf->right->left = NULL;    //Sets the left child of the child node to null
                leaf->right->right = NULL;   //Sets the right child of the child node to null
            }  
        }
    }
}

bool Tree::search(int val, NODE * leaf)
{
    if (leaf != NULL)
    {
        if (leaf->data == val)
        {
            // found the value in the tree
            return true;
        }
        else if (val < leaf->data)
        {
            search(val, leaf->left);
        }
        else 
        {
            search(val, leaf->right);
        }
    }
    else 
    {
        // value is not in the tree
        return false;
    }
}

bool Tree::search(int val)
{
    // return if a node is in the tree
    return search(val, root);
}

void Tree::printBFS()
{
    /* prints the tree in order from top to bottom using BFS:
     * ex.  3
     *     / \
     *    2   8
     *   /    /\
     * 1     5  9
     *        \
     *         7
     *  prints as: 3 28 159 7
     */
     
     // use a queue to print the tree 
     queue<NODE*> q;
     q.push(root);
     cout<<endl<<"BFS printout of binary tree: ";
     while (q.size() > 0)
     {
         NODE *n = q.front();
         q.pop();
         // write the value when you dequeue it
         cout<<n->data<<", "; 
         if (n->left != NULL)
         {
            //enqueue the left leaf node
            q.push(n->left);
         }
         if (n->right != NULL)
         {
            //enque the right leaf node
            q.push(n->right);
         }
     }
}

void Tree::printDFS()
{
    cout<<endl<<"DFS printout of binary tree: ";
    outputDFS(root);
}

void Tree::outputDFS(NODE * leaf)
{
    /* prints the tree in order from top to bottom using DFS:
     * ex.  3
     *     / \
     *    2   8
     *   /   / \
     * 1    5   9
     *       \
     *        7 
     *  prints as: 321 857 9
     */
     if (leaf)
     {
        cout<<leaf->data<<", "; 
        if (leaf->left)
        {
            outputDFS(leaf->left);
        }
        if (leaf->right)
        {
            outputDFS(leaf->right);
        }
    }
}

void Tree::printDepth() {
    
    int treeDepth = outputDepth(this->root); 
    cout<<endl<<"Binary tree height: "<<treeDepth<<endl;
}

int Tree::outputDepth(node * leaf) {
    
    if (leaf == NULL) {
        return 0;
    }
    
    // get the depth of the left and right subtrees using recursion 
    int leftDepth = outputDepth(leaf->left);
    int rightDepth = outputDepth(leaf->right);
    
    if (leftDepth > rightDepth) {
        return 1+leftDepth;
    }
    return 1+rightDepth;
    
}

