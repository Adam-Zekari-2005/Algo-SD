#include <stdio.h> 
#include <time.h> 
#include "prime.h" 

int main(void) { 
    int n; 
    printf("Entrez le nb : ");
    scanf("%d", &n);

    clock_t start_prime_naive = clock();
    long long int resultat_naive = count_prime(n);
    clock_t end_prime_naive = clock();
    double time_naive = (double)(end_prime_naive - start_prime_naive)/CLOCKS_PER_SEC;

    clock_t start_prime_eff = clock(); 
    long long int resultat_efficace = count_prime_efficient(n); 
    clock_t end_prime_eff = clock(); 
    double time_efficace = (double)(end_prime_eff - start_prime_eff)/CLOCKS_PER_SEC; 

    
    printf("Resultat Naive : %lld, et %f secondes\n", resultat_naive, time_naive);
    printf("Resultat Efficace : %lld, et %f secondes\n", resultat_efficace, time_efficace);
    return 0;
}