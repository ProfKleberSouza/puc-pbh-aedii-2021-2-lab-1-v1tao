#include "functions.h"

int menor(int v[], int n){
    int menor = v[0];

    for(int i = 0; i < n; i++){
        if(v[n] < menor){
            menor = v[n]; 
        } 
    }
    return menor; 
}
int menor_recursivo(int v[], int n, int menor){
    if(n == 0){
        return menor;
    }
    else{
        if(v[n - 1] < menor)
            menor = v[n - 1];
        return menor_recursivo(v, n - 1, menor);
    }
}
