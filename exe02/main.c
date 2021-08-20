#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[]) {
    // Variables
    int menor_num       = 0;
    int qnt_numeros = 0; 
    int array[1000]; 
     
    // ENTRADA DE DADOS
    scanf("%d", &qnt_numeros);
    for(int i = 0; i < qnt_numeros; i++){
        scanf("%d", &array[i]);
    }
    
    // PROCESSAMENTO - EXECUTANDO A FUNCAO
    menor_num = menor_recursivo(array, qnt_numeros, array[qnt_numeros - 1]);

    // SAIDA - IMPRIMINDO O RESULTADO
    printf("MENOR = %d\n", menor_num);

    return(0);
}
