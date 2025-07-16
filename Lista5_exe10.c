#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    int *b;
    int **c;
    int ***d;
    b = &a;
    c = &b;
    d = &c;
    scanf("%d", &a);
    printf("%d %d %d\n", (*b)*2, (**c)*3, (***d)*4);
    return 0;
}
