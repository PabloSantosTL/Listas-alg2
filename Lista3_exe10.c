#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* criarVetorVal(int N, int val){
    if(N<=0) return NULL;
    int *v=malloc(N*sizeof(*v));
    for(int i=0;i<N;i++) v[i]=val;
    return v;
}
int main(){
    int N,v; 
    scanf("%d %d",&N,&v); 
    int *p=criarVetorVal(N,v); 
    free(p); 
    return 0;
}
