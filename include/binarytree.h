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

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

 typedef struct node{
        node *left;
        node *right;
        int data;
    }NODE;
    
    

class Tree {
public:
	Tree();
    ~Tree();
    void insert(int val);
    bool search(int val);
    void printBFS();
    void printDFS();
    void printDepth(); 
    
private:
	node *root;
    int outputDepth(node * leaf); 
    void destroy_leaf(node * leaf);
    void outputDFS(node * leaf);
    void insert(int val, node * leaf);
    bool search(int val, node * leaf);
};

