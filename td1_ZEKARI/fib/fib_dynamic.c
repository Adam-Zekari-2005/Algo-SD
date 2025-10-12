#include <stdio.h>
#include <time.h> 


int fib_dynamic(int n, int DPFib[]) { 
    if (n<=1) { 
        return n; 
    } 
    else if (DPFib[n] != -1) { 
        return (DPFib[n]); 
    } 
    DPFib[n] = fib_dynamic(n-1, DPFib) + fib_dynamic(n-2, DPFib); 
    return DPFib[n];
} 

void main(int n, int DPFib[]) {  
    printf("Entrer le nb :"); 
    scanf("%d", &n);  
    int resultat = fib_dynamic(n, DPFib);
    printf("fibonnaci(%d) = %d\n", n, resultat);
}

