#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "search.h"
#include "utils.h"

int main(void)
{
    int n = 1000000; 
    int *arr = malloc(n*sizeof(int)); 

    for (int i = 0; i<n; i++ ) {
        arr[i] = i + 1; 
    }
    int target; 

    printf("Entrez le target : "); 
    scanf("%d", &target); 


    clock_t start_linear = clock(); 
    int res_linear = linear_search(arr, n, target);
    clock_t end_linear = clock(); 
    double time_linear = (double)(end_linear - start_linear)/CLOCKS_PER_SEC;  

    clock_t start_jump = clock(); 
    int res_jump = jump_search(arr, n, target);
    clock_t end_jump = clock(); 
    double time_jump = (double)(end_jump - start_jump)/CLOCKS_PER_SEC; 
    
    clock_t start_binary_search = clock(); 
    int res_binary_search = binary_search(arr, n , target); 
    clock_t end_binary_search = clock(); 
    double time_binary = (double)(end_binary_search - start_binary_search)/CLOCKS_PER_SEC;  

    
    if (res_linear != -1){ 
        printf("Le cas de Linear : %d se trouve à l'indice %d, temps = %f !\n", target, res_linear, time_linear); 
    }
    else
    {
        printf("Le cas de Linear : %d non trouve, temps = %f !\n", target, time_linear);
    }
 

    if (res_jump != -1) { 
        printf("Le cas de jump search : %d se trouve à l'indice %d, temps = %f !\n", target, res_jump, time_jump);
    } 
    else
    {
        printf("Le cas de jump search : %d non trouve, temps = %f !\n", target, time_jump); 
    }

    if (res_binary_search != -1) { 
        printf("Le cas de binary search : %d se trouve à l'indice %d, temps = %f !\n", target, res_binary_search, time_binary);
    } 
    else
    {
        printf("Le cas de binary search : %d non trouve, temps = %f !\n", target, time_binary); 
    }

    free(arr); 
    return 0;
}
