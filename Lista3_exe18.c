#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int** multMat(int **A, int rA, int cA, int **B, int rB, int cB){
    if(cA!=rB) return NULL;
    int **C=malloc(rA*sizeof(*C));
    for(int i=0;i<rA;i++){
        C[i]=calloc(cB,sizeof(*C[i]));
        for(int j=0;j<cB;j++)
            for(int k=0;k<cA;k++) C[i][j]+=A[i][k]*B[k][j];
    }
    return C;
}
