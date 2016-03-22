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

#include "tests.h"

using namespace std;

vector<int> bubble_sort(vector<int> arr)
{
    // bubble sort has a time efficiency of O(n^2) 
    int flag = 1;
    int num;
     
    for (unsigned int i=0; i<arr.size() && flag; i++) 
    {
        flag = 0;
        for (unsigned int j=i; j<arr.size()-1; j++) 
        {
            if (arr.at(j) > arr.at(j+1))
            {
                // swap the values 
                int temp = arr.at(j);
                arr.at(j) = arr.at(j+1);
                arr.at(j+1) = temp; 
                flag = 1; 
            }
        }
    }
    return arr; 
}

vector<int> insertion_sort (vector<int> arr)
{
    // more efficient than bubble sort, O(n) in best case and O(n^2) in worst case
    int j, temp;
    
    for (int i = 0; i < arr.size(); i++){
        j = i;

        while (j > 0 && arr.at(j) < arr.at(j-1))
        {
            temp = arr.at(j);
            arr.at(j) = arr.at(j-1);
            arr.at(j-1) = temp;
            j--;
        }
    }
    return arr;
}

vector<int> quick_sort(vector<int> arr, int left, int right) 
{
      // standard C++ sort algorithm, on average sorts at O(n*log(n))
      int i = left, j = right;
      int tmp;
      int pivot_index = (left + right) / 2;
      int pivot = arr.at(pivot_index);
 
      /* partition */
      while (i <= j) {
            while (arr.at(i) < pivot)
                  i++;
            while (arr.at(j) > pivot)
                  j--;
            if (i <= j) {
                  // swap the elements at i and j 
                  tmp = arr.at(i);
                  arr.at(i) = arr.at(j);
                  arr.at(j) = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quick_sort(arr, left, j);
      if (i < right)
            quick_sort(arr, i, right);
}

