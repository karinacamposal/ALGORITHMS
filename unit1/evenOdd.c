#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv) {
    int num;
    printf("Enter an integer number: \n");
    scanf("%d", &num);
    int result = num % 2;
    bool hasmodule = (result > 0);

    if (hasmodule){
        printf( "is an odd number \n");
    } else {
        printf("is an even number \n");
    }
    return 0;
}
