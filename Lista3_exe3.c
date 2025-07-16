#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Cadastro { char nome[100]; int idade; char endereco[200]; };
struct Cadastro* criarCadastro(int N){
    struct Cadastro *vet = malloc(N * sizeof(*vet));
    for(int i=0;i<N;i++){
        printf("Cadastro %d:\n", i+1);
        printf("Nome: "); scanf(" %99[^"]", vet[i].nome);
        printf("Idade: "); scanf("%d", &vet[i].idade);
        printf("Endereco: "); scanf(" %199[^"]", vet[i].endereco);
    }
    return vet;
}

int main(){
    int N;
     scanf("%d", &N);
      struct Cadastro *c = criarCadastro(N);
       free(c);
        return 0;
    }
