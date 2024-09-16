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

    int userIn;
    scanf("%d", &userIn);

    printf("The factorial of %d is %d.\n", userIn, numFactorial(userIn));

    
    return 0;
}