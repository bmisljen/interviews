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
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>
#include <string.h>

int fibrecursive(int n);
int fibiterative(int n);
void reverseString (std::string str);
void isPalindrome (std::string str);
void isAnagram (std::string str, std::string strTwo);
void stringprintchars(std::string str);
int gcd(int a, int b);
double squareroot(int num);
char firstUnique(std::string str);
int  multiplyWithoutSign(int a, int b);
int * addToTarget(int * arr, int arraySize, int target);
void bubble_sort(int * arr, int num);
void insertion_sort (int * arr, int num);
void mergeSort(int * arr, int l, int r);
void quickSort(int arr[], int low, int high);
void displayArray(int arr[], int size);
