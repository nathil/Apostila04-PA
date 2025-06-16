// Implemente uma função que calcule a transposta de uma matriz mat. A função tem como valor de retorno o ponteiro do vetor
// que representa a matriz transposta criada. A implementação dessa função deve ser dada por:
// float * transposta (int m,int n, float* mat) 

#include <stdio.h>
#include <stdlib.h> 

float* transposta(int m, int n, float* mat){
    float* tmat = malloc(sizeof(float)*(m*n)); 

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            tmat[m*j+i] = mat[n*i+j];  
        }
    }

    return tmat; 
}

int main(){
    int m=2, n=3; 

    float* mat = malloc(sizeof(float)*(m*n)); 
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Informe o valor para a posicao (%d,%d):", i, j); 
            scanf("%f", &mat[n*i+j]);
        }
    }

    for(int i=0; i<m; i++){
        printf("\n");
        for(int j=0; j<n; j++){
            printf("%.0f ", mat[n*i+j]);
        }
    }
    
    float* tmat =  transposta(m,n,mat); 

    for(int j=0; j<n; j++){
        printf("\n"); 
        for(int i=0; i<m; i++){
            printf("%.0f ", tmat[m*j+i]); 
        }
    }
}