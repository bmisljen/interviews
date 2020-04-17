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

using namespace std;

void bubble_sort(int * arr, int num)
{
    // bubble sort has a time efficiency of O(n^2) 
    for (int i=0; i<num; i++) 
    {
        for (int j=i; j<num-1; j++) 
        {
            if (arr[i] > arr[j+1])
            {
                // swap the values 
                int temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}

void insertion_sort (int * arr, int num)
{
    // more efficient than bubble sort, O(n) in best case and O(n^2) in worst case
    int j, temp;
    
    for (int i = 0; i < num; i++){
        j = i;

        while (j > 0 && arr[j] < arr[j-1])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}


