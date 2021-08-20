#include "functions.h"
#include <stdio.h>

void numero_vogais(char text[]){
    int vogais_map[5] = {'a', 'e', 'i', 'o', 'u'};
    int vogais_map_num[5] = {0, 0, 0, 0, 0}; 
    
    for(int i = 0; text[i] != '\0'; i++){
        for(int k = 0; k < 5; k++){
            if(text[i] == vogais_map[k])
                vogais_map_num[k]++;
        }
    }
    printf("A = %d\n"
           "E = %d\n"
           "I = %d\n"
           "O = %d\n"
           "U = %d\n", vogais_map_num[0], vogais_map_num[1], 
                       vogais_map_num[2], vogais_map_num[3], vogais_map_num[4]);
            

} 
