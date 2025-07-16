#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int N;
    printf("Tamanho do vetor: "); scanf("%d", &N);
    int *v = malloc(N * sizeof(*v));
    for(int i=0;i<N;i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("Vetor lido:\n");
    for(int i=0;i<N;i++) printf("%d ", v[i]);
    printf("\n");
    free(v);
    return 0;
}
