#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int** diagSecundaria(int N){
    int **m=malloc(N*sizeof(*m));
    for(int i=0;i<N;i++){
        m[i]=calloc(N,sizeof(*m[i]));
        m[i][N-1-i]=1;
    }
    return m;
}
int main(){
    int N; 
    scanf("%d", &N); 
    int **m=diagSecundaria(N); 
    for(int i=0;i<N;i++) 
    free(m[i]); 
    free(m); 
    return 0;
    }
