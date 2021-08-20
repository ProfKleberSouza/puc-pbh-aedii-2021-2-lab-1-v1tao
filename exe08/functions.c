#include "functions.h"
#include <stdbool.h>
#include <string.h>
bool is_palindromo(char texto[]){
    int size_of_text = 0;
    
    size_of_text = strlen(texto) - 1;

    for(int i = 0; i < size_of_text / 2; i++){
        if(texto[i] != texto[size_of_text - 1 - i])
            return false; 
    }
    return true;
}
