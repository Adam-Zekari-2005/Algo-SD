#include "utils.h"

void swap_int(int *a, int *b)
{
    int x = *a; 
    *a = *b; 
    *b = x;     
}

bool is_sorted_nondecreasing(int *arr, int n)
{  
    int i; 
    for (i=0; i < n-1; i++) { 
        if (arr[i] > arr[i+1]) { 
            return false;
        }
        return true;
    }
    // check if array is sorted, if yes return true
    // if not return false
}

void copy_array(int *src, int *dst, int n)
{ 
    int i; 
    for (i=0; i<n; i++) { 
        dst[i] = src[i];
    }
    // copy array elements src into dst
}