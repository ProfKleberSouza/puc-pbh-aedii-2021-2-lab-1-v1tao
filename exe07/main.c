#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[]){
    int num1 = 0;
    int num2 = 0;
    
    scanf("%d %d", &num1, &num2);   
    
    printf("%d", mdc(num1, num2));    
 
    return 0;
}
