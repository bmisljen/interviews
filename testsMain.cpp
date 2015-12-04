#include "tests.h"
#include "node.h"
#include "binarytree.h"

using namespace std;

int main(int argc, char **argv)
{
    int choice = 0;
    
    for (;;)
    {
        cout<<endl;
        cout<<"1. Fibinocci"<<endl;
        cout<<"2. Linked List"<<endl;
        cout<<"3. String Operations"<<endl;
        cout<<"4. Binary Trees"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"Enter the question you want: ";
        cin>>choice;
        cout<<endl;
        
        switch(choice)
        {
            case 0:
            {
                return 0;
            }
            case 1:
            {
                //fibinacci sequence 
                int n = 0;
                do
                {
                    cout<<"Enter the fibinacci number, 0 to go back to main menu: ";
                    cin>>n;
                    if (n!=0) {
                        cout<<endl;
                        cout<<"fibinacci recursive with input: "<<n<<": "<<fibrecursive(n)<<endl;
                        cout<<"------ITERATIVE--------------"<<endl;
                        cout<<"fibinacci iterative with input: "<<n<<": "<<fibiterative(n)<<endl;
                    }
                } while (n != 0 );
                continue;
                break;
            }
            case 2:
            {
                //linked list
                Node * nd = new Node;
                cout<<"appending: 7, 6, 4, 11 to the end of the list"<<endl;
                nd->append(7);
                nd->append(6);
                nd->append(4);
                nd->append(11);
                cout<<"appending: 5, 9, 2 to the start of the list"<<endl;
                nd->appendHead(5);
                nd->appendHead(9);
                nd->appendHead(2);
                cout<<"List contents: ";
                nd->print();
                cout<<"popping: "<<nd->pop()<<endl;
                cout<<"List contents: ";
                nd->print();
                cout<<endl<<"Reverse list contents: ";
                nd->rprint();
                delete nd; 
                break;
            }
            case 3:
            {
                //string reversal  
                char str[1024];
                cout<<"Enter a string to reverse: ";
                cin>>str;
                reverseString(str);
                cout<<"Enter a string to test for anagram: ";
                cin>>str;
                isAnagram(str);
                break;
            }
            case 4:
            {
                // binary trees 
                Tree * tree = new Tree();
                // create the binary tree 
                cout<<"Creating binary tree with values: 3, 2, 8, 1, 5, 7, 9"<<endl;
                tree->insert(3);
                tree->insert(2);
                tree->insert(8);
                tree->insert(1);
                tree->insert(5);
                tree->insert(7);
                tree->insert(9);
                //search for a node with value 5 
                cout<<endl<<"searching for a node with a value of 5"<<endl;
                if (tree->search(5))
                {
                    cout<<"found node with a value of 5"<<endl;
                }
                else 
                {
                    cout<<"did not find node with a value of 5"<<endl;
                }
                //search for a node with value 17
                cout<<endl<<"searching for a node with a value of 17"<<endl; 
                if (tree->search(17))
                {
                    cout<<"found node with a value of 17"<<endl;
                }
                else 
                {
                    cout<<"did not find node with a value of 17"<<endl;
                }
                // print the tree using BFS search
                tree->printBFS();
                cout<<endl;
                // print the tree using DFS search 
                //tree->printDFS();
                delete tree; 
                break;
            }
        }
    }
}
