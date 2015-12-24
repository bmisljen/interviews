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

/*
void merge(vector<int> arr, left, mid, right)
{
     int i, left_end, num_elements, tmp_pos;
     int temp[arr.size()];
     left_end = mid;
     tmp_pos = left;
     num_elements = right - left + 1;
     
     while ((left <= left_end) && (mid <= right))
     {
         if (numbers.at(left) <= numbers.at(mid)
         {
            temp[tmp_pos] = numbers.at(left);
            left++;
         }
         else
         {
            temp[tmp_pos] = numbers.at(mid);
            mid++;
         }
         tmp_pos++;
     }

     for (i = 0; i <= num_elements; i++)
     {
        arr.at(right) = temp[right];
        right--;
     }
     return arr;
}

void merge_sort(vector<int> arr, left, right)
{
    // merge sort is time efficiency of O(log(n) * n)
    int mid;
    int left = 0;
    int right = arr.size() - 1;
    
    if (right > left)
    {
        // list is not zero length 
        mid = left + (right - left) / 2;
        // sort the left side of the list 
        merge_sort(arr, left, mid);
        // sort the right side of the list
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
*/