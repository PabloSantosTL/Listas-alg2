#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Aluno {
    int matricula;
    char nome[100];
    float notas[3];
};
int main(){
    printf("sizeof(Aluno) = %zu byte(s)\n", sizeof(struct Aluno));
    return 0;
}
