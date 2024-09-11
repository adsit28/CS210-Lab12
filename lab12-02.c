/** lab12-02.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */
#include <stdio.h>
#include "lab12functs.h"

int main() {
    int num = 0;
    printf("Give me an integer: ");
    scanf("%d", &num);

    int primeResult = isPrime(num);

    if (primeResult){
        printf("%d is a prime number.\n", num);
    }
    else{
        printf("%d is a not prime number.\n", num);
    }
    

    return 0;
}