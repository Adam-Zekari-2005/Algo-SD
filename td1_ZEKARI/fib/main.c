#include <stdio.h> 
#include <time.h> 
#include "fib.h" 

int main(void) { 
    int n;
    printf("Entrer le nb : ");
    scanf("%d", &n);

    clock_t start_naive = clock();
    long long int resultat_naive = fib_naive(n); 
    clock_t end_naive = clock(); 
    double time_naive = (double)(end_naive - start_naive)/ CLOCKS_PER_SEC; 

    int i;
    long long int DPFib[n+1]; 
    for (i=0; i <= n; i++) { 
        DPFib[i] = -1; 
    }

    clock_t start_dynamic = clock();
    long long int resultat_dynamic = fib_dynamic(n, DPFib);
    clock_t end_dynamic = clock();
    double time_dynamic = (double)(end_dynamic - start_dynamic)/ CLOCKS_PER_SEC;


    printf("fibonnaci_naive(%d) = %lld\n", n, resultat_naive);
    printf("fibonnaci_dynamic(%d) = %lld\n", n, resultat_dynamic);
    printf("Time_naive : %f\n", time_naive); 
    printf("Time_dynamic : %f\n", time_dynamic);

    return 0;
}