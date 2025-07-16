#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, b;
    if(&a > &b)
        printf("%p\n", (void*)&a);
    else
        printf("%p\n", (void*)&b);
    return 0;
}
