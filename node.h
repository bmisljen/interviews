#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class Node
{
public:
	Node();
	~Node();
	void append(int);
    void appendHead(int);
	int pop();
	int peek();
    void rlist();
	void print();
    void rprint();
    void reverse();
    
private:
	typedef struct node {
		node *next;
		int data;
	} NODE;
	NODE *head;
};