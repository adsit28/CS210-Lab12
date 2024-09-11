/** lab12functs.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include "lab12functs.h"
#include <math.h>
#include <stdio.h>

/**
 * @brief returns the factorial of a number
 * @param the number to compute factorial for
 * @return the factorial of a number
 * @pre the number is positive
 * @post none
 */
int numFactorial(int n){
    int fac = 1;
    for(int i = 1; i <=n; i++) {
        fac *=i;
    }
    return fac;
}

/**
 * @brief checks if a number is prime
 * @param the number tested from primeness
 * @return 1 if Prime, 0 if not Prime
 * @pre the number is positive
 * @post none
 */
int isPrime(int n){
    int limit = (int)sqrt(n); // only have to check up to sqrt of number
    for(int i=2; i<=limit; i++){
        if(n%i==0){
            return 0; // returns 0 if n is divisible by i indicating a factor = Not Prime
        }
    }
    return 1;
}

/**
 * @brief Creates a modified Floyd's triangle
 * @param number of rows for the triangle
 * @return none
 * @pre the number is positive
 * @post none
 */
void floydsTriangle(int rows){
    int startValue = 1;
    for(int i = 1; i <= rows; i++){
        if(i%2==0){ // changes the row start value to 0 for even number rows
            startValue = 0;
        }
        else{
                startValue = 1;
            }
        for(int j = 1; j <= i; j++){
            printf("%d", startValue);
            if (startValue){
                startValue = 0;
            }
            else{
                startValue = 1;
            }
            
        }
        printf("\n");
    }
}