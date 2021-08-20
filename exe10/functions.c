#include "functions.h"
#include <stdio.h>

int potencia(int num, int exp){
    if(exp == 0)
        return 1;
    return num * potencia(num, exp - 1);
}

void tabela_verdade(int d){
    char num_bin[100];  
    int  total = potencia(2, d); 

    for(int i = 0; i < total; i++){
        for(int k = 0, tmp = i; k < d; k++, tmp /= 2){    
            num_bin[k] = tmp % 2; 
        }
        for(int m = d - 1; m >= 0; m--){
            printf("%d", num_bin[m]);
        }
        printf("\n");
    }

    
}

