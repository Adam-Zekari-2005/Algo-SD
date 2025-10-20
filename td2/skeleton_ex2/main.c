#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "utils.h"

int main(void)
{
    int n; 
    printf("Entrer la valeur : "); 
    scanf("%d",&n); 

    int *arr = malloc(n*sizeof(int)); 
    int *copy =  malloc(n*sizeof(int)); 

    int i;
    srand(time(NULL)); 
    for (i = 0; i <n; i++){ 
        arr[i]=rand()%100000;  
    }

    printf("Avant tri = ");
    for (i=0; i<n; i++) { 
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    copy_array(arr, copy, n);
    clock_t start_selection = clock();
    selection_sort(copy, n); 
    clock_t end_selection = clock();
    double time_selection = (double)(end_selection-start_selection)/CLOCKS_PER_SEC; 
    printf("Le cas de Selection Sort : "); 
    for (i=0; i<n; i++) { 
        printf("%d ", copy[i]);
    }
    printf("\nTemps selection : %f\n\n");

    copy_array(arr, copy, n);
    clock_t start_insertion = clock();
    insertion_sort(copy, n); 
    clock_t end_insertion = clock();
    printf("Le cas de Insertion Sort : "); 
    for (i=0; i<n; i++) { 
        printf("%d ", copy[i]);
    }
    printf("\nTemps insertion sort : %f\n\n");


    copy_array(arr, copy, n);
    clock_t start_bubble = clock();
    bubble_sort(copy, n); 
    clock_t end_bubble = clock();
    printf("Le cas de Bubble Sort : "); 
    for (i=0; i<n; i++) { 
        printf("%d ", copy[i]);
    }
    printf("\nTemps bubble sort : %f\n\n");

    copy_array(arr, copy, n);
    clock_t start_merge = clock();
    merge_sort(copy, n); 
    clock_t end_merge = clock();
    printf("Le cas de Merge Sort : "); 
    for (i=0; i<n; i++) { 
        printf("%d ", copy[i]);
    }
    printf("\nTemps Merge sort : %f\n\n");

    copy_array(arr, copy, n);
    clock_t start_quick = clock();
    quick_sort(copy, n); 
    clock_t end_quick = clock();
    printf("Le cas de Quick Sort : "); 
    for (i=0; i<n; i++) { 
        printf("%d ", copy[i]);
    }
    printf("\nTemps Quick sort : %f\n\n");

    free(arr);
    free(copy);

    return 0;
}
