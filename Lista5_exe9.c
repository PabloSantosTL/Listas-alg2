#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir(int *v, int N){
    int *p = v;
    for(; p < v + N; p++)
        printf("%d\n", *p);
}
int main(){
    int N;
    scanf("%d", &N);
    int *v = malloc(N * sizeof *v);
    for(int i = 0; i < N; i++) scanf("%d", &v[i]);
    imprimir(v, N);
    free(v);
    return 0;
}
