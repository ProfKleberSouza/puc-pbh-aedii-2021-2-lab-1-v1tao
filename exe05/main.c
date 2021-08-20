#include <stdio.h>
#include "functions.h"
#include <string.h>
int main() {
    // Variables
    char texto[100]; 
    // NOTA: fgets inclui '\n' antes do '\0'    
    fgets(texto, 100, stdin); 
    
    inverte(texto);
    
    return 0;
}
