#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float arr[10];
    for(int i = 0; i < 10; i++)
        printf("%p\n", (void*)&arr[i]);
    return 0;
}
