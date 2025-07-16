#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
struct Pessoa1 { char nome[100]; int idade; char endereco[200]; };
int main(){
    struct Pessoa1 p;
    scanf(" %99[^"] %d %199[^"]", p.nome, &p.idade, p.endereco);
    printf("Nome: %s\nIdade: %d\nEndereco: %s\n", p.nome, p.idade, p.endereco);
    return 0;
}
