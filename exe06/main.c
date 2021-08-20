#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[]) {
    // Variables
    int base     = 0;
    int expoente = 0;
    
    scanf("%d %d", &base, &expoente); 

    printf("%d\n", potencia(base, expoente));

    return 0; 
}
