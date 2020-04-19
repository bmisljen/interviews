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

// bubble sort has a time complexity of O(n^2) 
void bubble_sort(int * arr, int num)
{
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

// more efficient than bubble sort, O(n) in best case and O(n^2) in worst case
void insertion_sort (int * arr, int num)
{
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


// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
// O(nlogn) worst case time complexity 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    // n1 is the left subbaray size 
    int n1 = m - l + 1; 
    // n2 is the right subarray size 
    int n2 =  r - m; 
  
    // create two temporary arrays 
    int L[n1], R[n2]; 
  
    // Copy data to temp arrays L[] and R[] 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            // left array elment lower than or equal to right 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            // right array element lower than left 
            arr[k] = R[j]; 
            j++; 
        } 
        // go to the next element in the array 
        k++; 
    } 
  
    // Copy the remaining elements of L[], if there are any 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of R[], if there  are any
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int * arr, int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  
 
