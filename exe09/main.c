#include <stdio.h>
#include "functions.h"
#include <string.h>
int main() {

    int m = 0;
    int n = 0;
    // ENTRADA DE DADOS
    // m + n nao pode ser maior que 49  
    scanf("%d %d", &m, &n);
    // PROCESSAMENTO - EXECUTANDO A FUNCAO
    placar_possiveis(m, n);
    return 0;
}
