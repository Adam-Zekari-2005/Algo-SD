#include <stdio.h> 

int fib_naive(int n) { 
    if (n==0||n==1) {
        return n; 
    }
    else { 
        return (fib_naive(n-1)+fib_naive(n-2));
    }

}

void main(int n) { 
    printf("Entrer le nb : ");
    scanf("%d", &n);
    int i; 
    for (i = 0; i < n; i++) { 
        printf("%d", fib_naive(i));
    } 
    printf("\n");
} 



