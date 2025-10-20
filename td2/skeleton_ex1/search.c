#include <math.h>
#include <stdio.h>
#include "search.h"
#include "utils.h"

int linear_search(int *arr, int n, int target)
{ 
    int i; 
    for (i=0; i<n; i++) {
        if (arr[i]==target){ 
            return i; 
        } 
    }
    // linear search, return index of target
    // return -1 if not found

    return -1;
}

int jump_search(int *arr, int n, int target)
{
    if (!is_sorted_nondecreasing(arr,n)){ 
        return -1;
    }
    int m = sqrt(n); 
    int prev = 0; 

    while (arr[min_int(m,n)-1]<target)
    { 
        prev = m; 
        m+=sqrt(n); 
        if (prev >= n){  
            return -1;
        }
    } 
    int i;  
    for (i=prev; i<=min_int(m,n); i++){ 
        if (arr[i]==target){ 
            return i; 
        }
    }  
    // jump search on sorted array, return index
    // of target, return -1 if not found
    return -1;
}

int binary_search(int *arr, int n, int target)
{ 
    int low = 0; 
    int high = n - 1; 
    while (low<=high)
    {
        int mid = (low + high)/2; 
        if (target == arr[mid]) { 
            return mid; 
        } 
        if (target < arr[mid]) { 
            high = mid - 1;
        } 
        else { 
            low = mid + 1;
        }
    }
    // binary search on sorted array, return index
    // of target, return -1 if not found
    return -1;
}