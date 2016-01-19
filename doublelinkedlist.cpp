#include "tests.h"
#include "doublelinkedlist.h"
#include <vector>

using namespace std;

DoubleNode::DoubleNode()
{
    // Default Constructor 
	head = NULL;
    tail = NULL;
}

DoubleNode::~DoubleNode()
{
	while(head) {
        // delete the nodes one by one from head onwards 
		NODE *tmp = head;
		head = head->next;
		delete tmp;
	}
}

void DoubleNode::appendHead(char ch) 
{
    // Add a new node to the head of the list
	NODE *ptr = new NODE;
	ptr->next = head;
    ptr->prev = NULL;
	ptr->data = ch;
	head = ptr;
    ptr->next->prev = ptr;
    if (tail == NULL)
    {
        tail = head;
    }
}

void DoubleNode::append(char ch) 
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
        tail = ptr;
    }
	ptr->next = NULL;
    ptr->prev = tmp;
	ptr->data = ch;
    tail = ptr; 
}
   

char DoubleNode::pop()
{
    // Remove the first node in the list and return the value 
	NODE *tmp = head;
	char val = head->data;
	head = head->next;
    head->prev = NULL;
	delete tmp;
	return val;
}

char DoubleNode::peek()
{
    // Get the value of the first node in the list
	return head->data;
}

void DoubleNode::print()
{
    // print the list from start to finish 
	NODE *curr = head;
	while(curr) {
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}

void DoubleNode::rprint()
{
    // print the list from start to finish 
	NODE *curr = tail;
	while(curr) {
		cout << curr->data << " ";
		curr = curr->prev;
	}
	cout << endl;
}

void DoubleNode::reverse()
{
    //reverse a doubly linked linked list
    if (head == NULL)
    {
        // no nodes in the list to reverse 
        return;
    }
    if (head == tail)
    {
        // only one node in the list, no need to reverse it 
        return;
    }
    else
    {
        NODE * curr = head;
        NODE * currNext = NULL;
        while (curr != NULL)
        {
            // move the next node to the one after the current node 
            currNext = curr->next;
            // set the current node to point to the previous node
            NODE *tmp = curr->next;
            curr->next = curr->prev;
            curr->prev = tmp;
            // move the current node to the next node 
            curr = currNext;
        }
        // the head no points to the tail of the previous list 
        NODE *tmpHead = head;
        head = tail;
        tail = tmpHead;
    } 
    // print the reversed list 
    print();
}