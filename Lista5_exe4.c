#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float mat[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            printf("%p\n", (void*)&mat[i][j]);
    return 0;
}
