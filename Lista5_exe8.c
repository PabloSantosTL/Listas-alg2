#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preencher(int *v, int N, int val){
    int *p = v;
    for(; p < v + N; p++)
        *p = val;
}
int main(){
    int N, val;
    scanf("%d %d", &N, &val);
    int *v = malloc(N * sizeof *v);
    preencher(v, N, val);
    free(v);
    return 0;
}
