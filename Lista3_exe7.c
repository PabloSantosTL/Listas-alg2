#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* vetor0aN(int N){
    int *v = malloc(N * sizeof(*v));
    for(int i=0;i<N;i++) v[i]=i;
    return v;
}
int main(){
    int N;
     scanf("%d", &N);
      int *v=vetor0aN(N);
       free(v);
        return 0;
    }
