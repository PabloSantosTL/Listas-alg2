#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* matVec(int **A, int *B, int N){
    int *C=malloc(N*sizeof(*C));
    for(int i=0;i<N;i++){
        C[i]=0;
        for(int j=0;j<N;j++) C[i]+=A[i][j]*B[j];
    }
    return C;
}
