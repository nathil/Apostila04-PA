// Implemente uma função que calcule a transposta de uma matriz mat. A função tem como valor de retorno o 
// ponteiro do vetor que representa a matriz transposta criada. A implementação dessa função deve ser dada por:
// float * transposta (int m,int n, float** mat) OBS:utilizar vetor de ponteiros 

#include <stdio.h> 
#include <stdlib.h> 

float** transposta(int m, int n, float** mat){
    float** tmat = malloc(sizeof(float*)*m); 

    for(int i=0; i<n; i++){
        tmat[i] = malloc(sizeof(float)*n); 
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            tmat[j][i] = mat[i][j];  
        }
    }

    return tmat; 

}

int main(){
    int m=2, n=3; 

    float** mat = malloc(sizeof(float*)*m); 

    for(int i=0; i<n; i++){
        mat[i] = malloc(sizeof(float)*n);  
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Insira um valor para (%d,%d)", i, j); 
            scanf("%f", &mat[i][j]); 
        }
    }
    
    for(int i=0; i<m; i++){
        printf("\n"); 
        for(int j=0; j<n; j++){
            printf("%.0f ", mat[i][j]); 
        }
    }

    float** tmat = transposta(m,n,mat); 

    for(int j=0; j<n; j++){
        printf("\n"); 
        for(int i=0; i<m; i++){
            printf("%.0f ", tmat[j][i]); 
        }
    }
}