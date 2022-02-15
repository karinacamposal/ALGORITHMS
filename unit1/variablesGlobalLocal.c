#include <stdio.h>
#include <stdlib.h>


//*Global variables*//
char* date = "02-02-22T10:25:00z";
/////////////////////////////////

/// La ejecución del programa///
int main(){
    date = "02-02-22T10:25:00z";
    int hours = 22; //Local:main
    hours = hours + 2;
    printf("hours: %d\n", hours); 
    return 0;
}
////////////////////////////////////////