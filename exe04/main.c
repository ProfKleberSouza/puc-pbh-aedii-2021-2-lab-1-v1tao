#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(int argc, char *argv[]){
    char texto[100];
    //problema com %string nao le uma linha apenas uma palavra 
    fgets(texto, 100, stdin);
    int i = 0; 

    numero_vogais(texto); 

    return 0;
}
