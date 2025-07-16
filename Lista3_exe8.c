#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* criarVetor(int N){ return N>0? malloc(N*sizeof(int)) : NULL; }
int main8(){
    int N;
     scanf("%d", &N); 
     int *p=criarVetor(N); 
     free(p);
      return 0;
    }
