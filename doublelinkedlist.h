#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class DoubleNode
{
public:
	DoubleNode();
	~DoubleNode();
	void append(char);
    void appendHead(char);
	char pop();
	char peek();
    void rlist();
	void print();
    void rprint();
    void reverse();
    
private:
	typedef struct node {
		node *next;
        node *prev;
		char data;
	} NODE;
	NODE *head;
    NODE *tail;
};