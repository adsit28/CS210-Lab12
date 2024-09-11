/** lab12-03.c
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
    int rows = 0;

    printf("Give me an integer: ");
    scanf("%d", &rows);
    floydsTriangle(rows);
    return 0;
}