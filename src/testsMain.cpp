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
#include "../include/doublelinkedlist.h"
#include "../include/binarytree.h"
#include "../include/Objects.h"

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
        cout<<"8. Objects and Polymorphism"<<endl;
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
                    cout<<"The fibinacci sequence is found by adding up two numbers before a number"<<endl;
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
                
                Node * firstNumber = new Node;
                firstNumber->append(1);
                firstNumber->append(2);
                firstNumber->append(3);
                
                Node * secondNumber = new Node;
                secondNumber->append(7);
                secondNumber->append(8);
                secondNumber->append(9);
                
                cout<<endl<<"The first number is: ";
                firstNumber->print();
                
                cout<<endl<<"The second number is: ";
                secondNumber->print();
            
                Node * result = new Node;
                result->sumLists(firstNumber, secondNumber);
                cout<<endl<<"The summed result is: ";
                result->print();
                
                delete nd, firstNumber, secondNumber, result;
                
                break;
            }
            case 3:
            {
                string str;
                string strTwo;
                
                cout<<"Enter a string to reverse: ";
                cin>>str;
                reverseString(str);
                cout<<"Enter two strings to test for anagram: ";
                cin>>str>>strTwo;
                isAnagram(str,strTwo);
                cout<<"Enter a string to test for palindrome: ";
                cin>>str;
                isPalindrome(str);
                cout<<"Enter a string to print the characters: ";
                cin>>str;
                stringprintchars(str);
                cout<<endl<<"enter a string to find the first unique character: ";
                cin>>str;
                char c = firstUnique(str);
                if (c != '\0')
                    cout<<"The first unique character of: "<<str<<" is: "<<c<<endl;
                else
                    cout<<"There are no unique characters in the string"<<endl; 
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
                // print the tree using DFS search
                tree->printDFS();
                // print the height of the binary tree using DFS search 
                tree->printDepth(); 
                cout<<endl;
                // print the tree using DFS search 
                delete tree; 
                break;
            }
            case 5:
            {
                int a,b;
                double c;
                cout<<"Enter two positive integers (separated by spaces) to find the GCD: ";
                cin>>a;
                cin>>b;
                cout<<"The GCD between: "<<a<<" and: "<<b<<" is: "<<gcd(a,b)<<endl;
                cout<<"Enter a number to find the square root: ";
                cin>>c;
                cout<<"The square root of: "<<c<<" is: "<<squareroot(c)<<endl;
                cout<<"Enter two integers (separated by spaces) to multiply without a * sign: ";
                cin>>a;
                cin>>b;
                cout<<"The result of the multiplication is: "<<multiplyWithoutSign(a,b)<<endl;
                
                int arr[5] = {1,2,3,4,5};
                cout<<"Adding elements: 1,2,3,4,5 to an array"<<endl; 
                int * target = addToTarget(arr, 5, 8);
                if (target) {
                    cout<<"Indexes of two array elements which sum up to 8 are: "<<target[0]<<", "<<target[1]<<endl;
                }
                
                break;
            }
            case 6:
            {
                cout<<endl;
                int num;
                cout<<"Enter the number of array numbers (ELEMENTS) [THEN PRESS ENTER]:";
                cin>>num;
                int arr[num];
                int arrTwo[num];
                int arrThree[num];
                int arrFour[num];
                
                cout<<"Enter the ( "<< num <<" ) numbers [THEN PRESS ENTER]:"<<endl;
                for(int i=0; i<num; i++)
                {
                    cin>>arr[i];
                }
                memcpy(arrTwo, arr, num*sizeof(int)); 
                memcpy(arrThree, arr, num*sizeof(int));
                memcpy(arrFour, arr, num*sizeof(int));

                 // bubble sort 
                bubble_sort(arr, num);
                
                cout<<endl<<"Bubble Sort Output: "<<endl;
                displayArray(arr, num);
                cout<<endl;
                
                // insertion sort 
                insertion_sort(arrTwo, num);
                
                cout<<endl<<"Insertion Sort Output: "<<endl;
                displayArray(arrTwo, num);
                cout<<endl; 
                
                // merge sort 
                mergeSort(arrThree, 0, num - 1); 
                
                cout<<endl<<"Merge Sort Output: "<<endl;
                displayArray(arrThree, num);
                cout<<endl;
                
                // quick sort
                quickSort(arrFour, 0, num-1); 
                
                cout<<endl<<"Quick sort output: "<<endl; 
                displayArray(arrFour,num); 
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
            case 8:
            {
                cout<<endl;
                Rectangle rect;
                Square sqr(5);
                cout<<"Creating square with a side length of 5"<<endl;
                Polygon * ppoly1 = &rect;
                Polygon * ppoly2 = &sqr;
                ppoly1->set_values (4,5);
                cout<<"Setting rectangle width = 4, height = 5"<<endl;
                // call the area function of rectangle 
                cout <<"The area of the rectangle is: "<<ppoly1->area()<<endl;
                // call the area function of square
                cout <<"The area of the square is: "<<ppoly2->area()<<endl;
                // creating a new rectangle of type square with default constructor
                cout<<"Creating rectangle with default square constructor (side length = 3)"<<endl;
                Rectangle * rect1 =  new Square;
                // the area of the square and not the rectangle is displayed
                cout <<"The area of the new object is: "<<rect1->area()<<endl;
                break;
            }
            default:
            {
                return 0;
            }
        }
    }
}

