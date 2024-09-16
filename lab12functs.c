/** lab12functs.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */
#include <stdio.h>

int numFactorial(int range){
    int facty = 1;
    int i;
    for(i = 1; i <= range; i++){
        facty = facty * i;
    }
    return facty;
}

int isPrime(int numGiv){
    
    if(numGiv % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }

}

void floydsTriangle(int thenum){
    int i;
    int j;
    int keeper = 0;
//was on the right track. used chatgpt to help me find where I was going wrong.
//I didn't quite understand the prompt so I had several working but different programs
    for(i = 1; i <= thenum; i++){
        
        for(j = 1; j <= i; j++){
            
            if((i+j)%2 == 0){
                keeper = 1;
            }
            else{
                keeper = 0;
            }
            printf("%d", keeper);

            
        }
        printf("\n");
        
    }
    

   
}
