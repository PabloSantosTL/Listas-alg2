#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int *p = (&a > &b) ? &a : &b;
    printf("%d\n", *p);
    return 0;
}
