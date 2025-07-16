#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int N; scanf("%d", &N);
    int **m=malloc(N*sizeof(*m));
    for(int i=0;i<N;i++){
        m[i]=malloc(N*sizeof(*m[i]));
        for(int j=0;j<N;j++)
            m[i][j] = (i<j?1:(i>j?-1:0));
    }
    for(int i=0;i<N;i++) free(m[i]); free(m);
    return 0;
}
