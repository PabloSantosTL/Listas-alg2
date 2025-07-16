#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int buscaMatriz(int **m, int lin, int col, int val){
    for(int i=0;i<lin;i++)
        for(int j=0;j<col;j++)
            if(m[i][j]==val) return 1;
    return 0;
}
int main(){
    int l,c,v;
    scanf("%d %d %d", &l,&c,&v);
    int **m = malloc(l * sizeof(*m));
    for(int i=0;i<l;i++) m[i]=malloc(c*sizeof(*m[i]));
    for(int i=0;i<l;i++) for(int j=0;j<c;j++) scanf("%d", &m[i][j]);
    printf("%d\n", buscaMatriz(m,l,c,v));
    for(int i=0;i<l;i++) free(m[i]); free(m);
    return 0;
}
