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
    void sumLists(Node * first, Node * second);
    int getListSize();
    
private:
	typedef struct node {
		node *next;
		int data;
	} NODE;
	NODE *head;
};
