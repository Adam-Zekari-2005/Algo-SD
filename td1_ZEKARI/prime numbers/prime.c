#include <stdio.h> 
#include <stdlib.h>
#include "prime.h" 

long long int prime_naive(int n) {  
    if (n<=1){ 
        return 0; 
    }
    int i; 
    for (i=2; i * i <=n; i++) { 
        if (n%i==0) { 
            return 0;
        }
    } 
    return 1; 
}

long long int count_prime(int n) { 
    long long int count = 0;
    int i; 
    for (i = 2; i<=n; i++) { 
        if (prime_naive(i)) {
            count++; 
        }
    }
    return count; 
}


long long int count_prime_efficient(int n) { 
    if (n<=1) { 
        return 0;
    }
    char *Prime = malloc((n+1)*sizeof(char)); 
    if (Prime == NULL) { 
        printf("Erreur malloc"); 
        return -1;
    } 

    int i; 
    for (i=0; i<=n; i++) { 
        Prime[i] = 1; 
    }  
   Prime[0] = 0; 
   Prime[1] = 0;

  
    int k; 
    int m; 
    for (k=2; k * k <=n; k++){ 
        if (Prime[k]) { 
            for (m=k*k; m<=n; m+=k){ 
                Prime[m] = 0;
            }
        }
    } 

    long long int count = 0; 
    for (i=2; i<=n; i++) { 
        if (Prime[i]){ 
            count++; 
        }
    } 
    free(Prime); 
    return count; 
} 
