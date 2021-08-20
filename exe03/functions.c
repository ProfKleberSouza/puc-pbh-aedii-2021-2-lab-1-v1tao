#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){
    *menor = v[0];
    *maior = v[0];

    for(int i = 0; i < n; i ++){
        if(v[i] < *menor)
            *menor = v[i];
        
        if(v[i] > *maior)
            *maior = v[i];
    }
}
