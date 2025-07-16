#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int arr[5];
    int *p = arr;
    for(; p < arr + 5; p++)
        scanf("%d", p);
    for(p = arr; p < arr + 5; p++)
        printf("%d\n", (*p) * 2);
    return 0;
}
