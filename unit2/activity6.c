#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libraries/utils.h"

int main(int argc, char** argv){
    
   printf("argv[1]: %s argv[1]: %s\n", argv[1], argv[2]);
    int range1 = atoi(argv[1]);
    int range2 = atoi(argv[2]);
    
    printf("EVEN NUMBERS \n");
    for(int i = 1; i <= range1; i++){
    int number =  i;
    bool isEven = (number % 2 == 0); 
    
    
    if(isEven) printf("even number: %d\n", number);
}

    printf("ODD NUMBERS \n");
    int i = 1;
    while (i<= range2){
        int number = i;
        bool isEven = (number % 2 == 0);

        if (!isEven) printf("odd number: %d\n", number);

        i = i + 1;
        sleep(1000);
    };
   
    return 0;
    } 