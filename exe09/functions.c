#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

char placar_g[50]; 
int is_reverse(char placar[], int m, int n){
    char placar_reverso[50];
    
    for(int i = 0; i < n; i++)
        placar_reverso[i] = 'B';
    for(int i = n; i < m + n; i++)
        placar_reverso[i] = 'A';
    
    for(int i = 0; i < m + n; i ++){
        if(placar_reverso[i] != placar[i])
            return 0;
    } 
    return 1; 
}
void criar_placar_inicial(char placar_inicial[], int m, int n){

    if(placar_g[m + n] != 'F'){ 
        for(int i = 0; i < m; i++)
            placar_inicial[i] = 'A';
        
        for(int i = m; i < m + n; i++)
            placar_inicial[i] = 'B';
        placar_g[m + n] = 'F';
    }
}
void print_placar(char placar[], int m, int n){
    for(int i = 0; i < m + n; i++){
        printf("%c", placar[i]);
    }
    printf("\n"); 
}

void permutar_placar(char placar[], int m, int n){
    int  count = 0;
    int  final = m + n - 1; 
    char tmp;
    
    while(placar[final - count] != 'A'){
        count++;
    }
    for(int i = 0; i < count; i++){
        tmp                           = placar[final - count + i + 1];
        placar[final - count + i + 1] = placar[final - count + i]; 
        placar[final - count + i]     = tmp; 
        print_placar(placar, m, n); 
    } 
}
void ajustar_placar(char placar[], int m, int n){
    int pos_alpha       = 0;
    int num_de_bolinhas = 0;
    int pos_final       = m + n - 1; 
    
    //contar bolinhas no final 
    while(placar[pos_final - num_de_bolinhas] != 'B'){
        num_de_bolinhas++;
    }
    pos_alpha = pos_final - num_de_bolinhas; 

    do{
        pos_alpha--;
    }while(placar[pos_alpha] != 'A');
     
    for(int i = pos_alpha; i < pos_final + 1; i++){
        placar[i] = 'B';
    } 
    for(int i = 0; i < num_de_bolinhas + 1; i++){
        placar[pos_alpha + i + 1] = 'A';
    }
}

void placar_possiveis(int m, int n){
    int  pos_final = m + n - 1; 
    criar_placar_inicial(placar_g, m, n); 
    print_placar(placar_g, m, n); 
    
    // Caso base
    if(is_reverse(placar_g, m , n) == 1)
        return ;
    
    permutar_placar(placar_g, m ,n); 
    if (m != 1){ 
        ajustar_placar(placar_g, m, n);
        placar_possiveis(m, n);
    }
}


