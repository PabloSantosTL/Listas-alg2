#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* somaCol(int **A, int N){
    int *B=calloc(N,sizeof(*B));
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++) B[j]+=A[i][j];
    return B;
}
