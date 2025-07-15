#include <stdio.h>
struct Prod{
int cod;
char desc[100];
double preco;
};
int main(){
  FILE *f=fopen("PRODUTOS.txt","w"); 
  fclose(f); 
  return 0;
}
