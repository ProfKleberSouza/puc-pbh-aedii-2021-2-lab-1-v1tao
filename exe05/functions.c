#include "functions.h"
#include <string.h>
#include <stdio.h>
void inverte(char text[]){
    //Variables 
    char tmp; 
    int size_of_text = 0;
    // Por conta do programa principal usar fgets, inclui o char '\n', entao str len - 1 
    size_of_text = strlen(text) - 1;
    // Versao otimizada 
    for(int i = 0; i < size_of_text / 2; i++){
        tmp = text[i];
        text[i] = text[size_of_text - 1 - i]; // -1 por conta do '\n' incluido
        text[size_of_text - 1 - i] = tmp;
    }
    printf("%s\n", text);
}
