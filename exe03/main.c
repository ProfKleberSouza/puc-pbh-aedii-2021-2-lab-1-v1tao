#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[]){
    // Variables
    int array[1000];
    int size_of_array = 0;
    int maior = 0;
    int menor = 0;

    scanf("%d", &size_of_array);
    
    for(int i = 0; i < size_of_array; i++){
        scanf("%d", &array[i]);
    }
    menor_maior(array, size_of_array, &menor, &maior); 
   
    printf("MENOR = %d\n"
           "MAIOR = %d\n", menor, maior);
    
    return 0;
}
