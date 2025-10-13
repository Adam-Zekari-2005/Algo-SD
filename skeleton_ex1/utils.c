#include "utils.h"

bool is_sorted_nondecreasing(int *arr, int n) 
{ 
    int i; 
    for (i=0; i < n - 1; i++)
    { 
        if (arr[i] > arr[i+1]) { 
            return false;
        }  
    return true;  
    }
    // return true if array is sorted and false otherwise
}

int min_int(int a, int b)
{ 
    int min_val; 
    if (a > b) { 
        min_val = a;
    } 
    else {  
        min_val = b;
    } 
    return min_val; 
    // return smallest value between a and b
}


