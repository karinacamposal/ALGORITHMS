#include <stdio.h>
#include <stdlib.h>


//*Global variables*//
char* date = "02-02-22T10:25:00z";
/////////////////////////////////

/// La ejecución del programa///
int main(){
    date = "02-02-22T10:25:00z";
    int hours = 22; //Local:main
    float pi = 3.1416; //%f
    char character = 'c'; // %c
    char* name = "Karinaaa"; //%s
    int *adress = &hours;//%p
    hours = hours + 2;
    printf("valor: %c," character); 
    return 0;
}
////////////////////////////////////////