#include "functions.h"

int potencia(int x, int n){
    if(n == 0)
        return 1;
    return x * potencia(x, n - 1);
}
