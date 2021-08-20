#include <stdio.h>
#include "functions.h"

int main() {
    char texto[100];

    fgets(texto, 100, stdin);
    
    if(is_palindromo(texto))
        printf("SIM");
    else
        printf("NAO");
    return 0;
}
