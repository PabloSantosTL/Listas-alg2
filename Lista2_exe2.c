#include <stdio.h>
#include <string.h>
struct Cliente{int Cod; char Nome[100]; char Endereco[100]; char Fone[20];};
int main(){
    struct Cliente c;
    FILE *f=fopen("Clientes.dat","ab");
    scanf("%d %99[^"] %99[^"] %19s",&c.Cod,c.Nome,c.Endereco,c.Fone);
    fwrite(&c,sizeof(c),1,f);
    fclose(f);
    return 0;
}
