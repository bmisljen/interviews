#include "tests.h"
#include "node.h"
#include "doublelinkedlist.h"
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
        cout<<"5. Number Operations"<<endl;
        cout<<"6. Sorting"<<endl;
        cout<<"7. Double Linked List"<<endl;
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
                cout<<"In order list printout: ";
                nd->print();
                cout<<endl<<"Reverse list printout: ";
                nd->rprint();
                cout<<endl<<"Reversing nodes in list, new list printout in order: ";
                nd->reverse();
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
                cout<<"Enter a string to print the characters: ";
                cin>>str;
                stringprintchars(str);
                cout<<endl<<"enter a string to find the first unique character: ";
                cin>>str;
                char c = firstUnique(str);
                cout<<"The first unique character of: "<<str<<" is: "<<c<<endl;
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
            case 5:
            {
                int a,b;
                cout<<"Enter two positive integers (separated by spaces) to find the GCD: ";
                cin>>a;
                cin>>b;
                cout<<"The GCD between: "<<a<<" and: "<<b<<" is: "<<gcd(a,b)<<endl;
                break;
            }
            case 6:
            {
                cout<<endl;
                int num;
                cout<<"Enter the number of array numbers (ELEMENTS) [THEN PRESS ENTER]:";
                cin>>num;
                vector<int> arr;
                cout<<"Enter the ( "<< num <<" ) numbers (ELEMENTS) [THEN PRESS ENTER]:"<<endl;
                for(int i=1; i<=num; i++)
                {
                    int element;
                    cin>>element;
                    arr.push_back(element);
                }
                vector<int> sorted = bubble_sort(arr);
                cout<<endl<<"Bubble Sort Output: "<<endl;
                for (vector<int>::iterator it = sorted.begin() ; it != sorted.end(); ++it)
                {
                    cout<<*it<<" ";
                }
                cout<<endl;
                cout<<"Insertion Sort Output: "<<endl;
                sorted = insertion_sort(arr);
                for (vector<int>::iterator it = sorted.begin() ; it != sorted.end(); ++it)
                {
                    cout<<*it<<" ";
                }
                cout<<endl;
                cout<<"Quick Sort Output: "<<endl;
                sorted = quick_sort(arr, 0, arr.size()-1);
                for (vector<int>::iterator it = sorted.begin() ; it != sorted.end(); ++it)
                {
                    cout<<*it<<" ";
                }
                cout<<endl;
                break;
            }
            case 7:
            {
                cout<<endl;
                // double linked list
                DoubleNode * nd = new DoubleNode;
                cout<<"appending: a, c, f, z to the end of the list"<<endl;
                nd->append('a');
                nd->append('c');
                nd->append('f');
                nd->append('z');
                cout<<"appending: t, o, i to the start of the list"<<endl;
                nd->appendHead('t');
                nd->appendHead('o');
                nd->appendHead('i');
                cout<<"List contents: ";
                nd->print();
                cout<<"popping: "<<nd->pop()<<endl;
                cout<<"In order list printout: ";
                nd->print();
                cout<<endl<<"Reverse list printout: ";
                nd->rprint();
                cout<<endl<<"Reversing nodes in list, new list printout in order: ";
                nd->reverse();
                delete nd; 
                break;
            }
            default:
            {
                return 0;
            }
        }
    }
}

