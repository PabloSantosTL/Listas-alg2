#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int N;
    do{ printf("N (>=0): "); scanf("%d", &N);
    }while(N<0);
    int *V = malloc(N * sizeof(*V));
    for(int i=0;i<N;i++){
        do{ printf("V[%d] (>=2): ", i);
            scanf("%d", &V[i]);
        }while(V[i]<2);
    }
    free(V);
    return 0;
}
