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
    int userIn;
    printf("Give me an integer: ");
    scanf("%d", &userIn);
    if(isPrime(userIn) == 1){
        printf("%d is a prime number.", userIn);
    }
    else{
        printf("%d is not a prime number.", userIn);
    }
    
    return 0;
}