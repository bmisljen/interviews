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

#include "../include/tests.h"
#include "../include/node.h"
#include <vector>

using namespace std;

Node::Node()
{
    // Default Constructor 
	head = NULL;
}

Node::~Node()
{
	while(head) {
        // destructor, delete the nodes one by one from head onwards 
		NODE *tmp = head;
		head = head->next;
		delete tmp;
	}
}

void Node::appendHead(int n) 
{
    // Add a new node to the head of the list
	NODE *ptr = new NODE;
	ptr->next = head;
	ptr->data = n;
	head = ptr;
}

void Node::append(int n) 
{
    // add a new node to the tail of the list
	NODE *ptr = new NODE;
    NODE *tmp = head; 
    if (tmp) {
        while (tmp->next != NULL)
        {
            // go to the end of the list 
            tmp = tmp->next;
        }    
        // link the last node of the linked list to the newly created node
        tmp->next = ptr;
    } 
    else {
        // no head node exists yet 
        head = ptr;
    }
	ptr->next = NULL;
	ptr->data = n;
}
   

int Node::pop()
{
    // Remove the first node in the list and return the value 
	NODE *tmp = head;
	int val = head->data;
	head = head->next;
	delete tmp;
	return val;
}

int Node::peek()
{
    // Get the value of the first node in the list
	return head->data;
}

void Node::print()
{
    // print the list from start to finish 
	NODE *curr = head;
	while(curr) {
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}

void Node::rprint()
{
    vector<int> myvector;
	NODE *curr = head;
    while (curr->next != NULL)
    {
        // go to the end of the list, store the node values in a vector
        myvector.push_back(curr->data);
        curr = curr->next;
    }
    myvector.push_back(curr->data);
	for (unsigned int i=myvector.size(); i>0; i--)
    {
        // list the elements in reverse order 
        cout << myvector[i-1]<< " ";
    }
	cout << endl;
}

int Node::getListSize()
{
    int counter = 1; 
    
    if (head == NULL) {
        return 0;
    } 
    
    NODE *curr = head;
    while (curr->next != NULL) {
        counter++;
        curr = curr->next;
    }
    
    return counter; 
}

void Node::reverse()
{
    //reverse a singly linked linked list
    if (head == NULL)
    {
        // no nodes in the list to reverse 
        return;
    }
    if (head->next == NULL)
    {
        // only one node in the list, no need to reverse it 
        return;
    }
    else
    {
        NODE * prev = NULL;
        NODE * curr = head;
        NODE * currNext = NULL;

        while (curr != NULL)
        {
            // move the next node to the one after the current node 
            currNext = curr->next;
            // set the current node to point to the previous node
            curr->next = prev;
            // move the previous node to the current node
            prev = curr;
            // move the current node to the next node 
            curr = currNext;
        }
        // the head no points to the tail of the previous list 
        head=prev;
    }
    // print the reversed list 
    print();
}

void Node::sumLists(Node * first, Node * second) {
    // Sums two 3-node linked lists and returns the value in a third linked list 
    
    vector<int> firstDigits;
    vector<int> secondDigits; 
    int carry = 0;
    
    if ((first->getListSize() != 3) || (second->getListSize() != 3)) {
        // improper number of list elements 
        return;
    }
    
    for (int i=0; i<3; i++)
    {
        firstDigits.push_back(first->pop());
        secondDigits.push_back(second->pop());
    }

    int onesDigit = firstDigits[2] + secondDigits[2];
    if (onesDigit > 9) {
        carry = 1;
        onesDigit -= 10;
    } 
    
    int tensDigit = firstDigits[1] + secondDigits[1] + carry;
    carry = 0; 
    
    if (tensDigit > 9) {
        carry = 1;
        tensDigit -= 10;
    } 
   
    int hundredsDigit = firstDigits[0] + secondDigits[0] + carry;
    
    // add the summed elements to the current linked list 
    this->append(hundredsDigit); 
    this->append(tensDigit);
    this->append(onesDigit);
}

