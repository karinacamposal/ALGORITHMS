#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/utils.h"

int main (int argc, char** argv){ 
    printf("argv[1]: %s argv [2]: %s \n", argv [1], argv[2]); 
    int rango1 = atoi (argv[1]);
    int rango2 = atoi(argv[2]);

    for (int i = 1; i <= rango1 ; i++){ 
        int number = i;
        bool isDivided = (number % 2 == 0); 
        printf("iterador: %d \n", i);

        if (isDivided) printf("Even number: %d \n", number);
    }

    system ("clear");

    printf("While solution!!! \n");
    int i = 1;    
    while ( i <= rango2){
        printf("iterador: %d \n", i);
        i += 1;
        
    };

    return 0;
}