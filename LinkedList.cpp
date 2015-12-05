#include "tests.h"
#include "node.h"
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
        // delete the nodes one by one from head onwards 
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

void Node::reverse()
{
    //reverse a singly linked linked list
    NODE *tail = head;
    while (tail->next != NULL)
    {
        // find the end of the list
        tail = tail->next;
    }
    if (head == NULL)
    {
        // no nodes in the list to reverse 
        return;
    }
    if (tail == head)
    {
        // only one node in the list, no need to reverse it 
        return ;
    }
    if (head->next == tail)
    {
        // two nodes in the list
        tail->next = head;
        head->next = NULL;
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
        head=prev;
    }
    // print the reversed list 
    print();
}