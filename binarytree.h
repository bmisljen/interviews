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
    
    
class Tree
{
public:
	Tree();
	~Tree();
	void insert(int val);
    bool search(int val);
	void printBFS();
    void printDFS();
    
private:
	NODE *root;
    void destroy_leaf(NODE * leaf);
    void insert(int val, NODE * leaf);
    bool search(int val, NODE * leaf);
};

