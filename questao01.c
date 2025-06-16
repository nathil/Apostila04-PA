// Implemente uma função que indique se uma matriz quadrada de números inteiros é uma matriz identidade ou não. 
// A função deve retornar 1 se a matriz for uma matriz identidade e caso contrário. A função recebe como 
// parâmetros a matriz de inteiros,usando a representação de matrizes através de vetores sinples e um número n ,
// indicando a dimensão da matriz. Essa função deve obedecer ao protótipo: int matriz_identidade(int *mat,int n) 

#include <stdio.h>
#include <stdlib.h>

int eidentidade(int *mat, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j && mat[n*i+j] != 1){
                return 0; 
            } else if (i != j && mat[n*i+j] != 0){
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int n=2; 
    
    int* mat = malloc(sizeof(int) * (n*n)); 
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Insira um valor para a posicao (%d,%d)\n", i,j); 
            scanf("%d", &mat[n*i+j]); 
        }
    }
    
    printf("A matriz e identidade?: %s", eidentidade(mat, n) ? "sim":"nao"); 
}