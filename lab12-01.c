/** lab12-01.c
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
    printf("The factorial of %d is %d.\n", num, numFactorial(num));

    return 0;
}