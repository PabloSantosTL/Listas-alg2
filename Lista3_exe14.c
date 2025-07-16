#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* somaVet(int *A, int *B, int N){
    int *C=malloc(N*sizeof(*C));
    for(int i=0;i<N;i++) C[i]=A[i]+B[i];
    return C;
}
