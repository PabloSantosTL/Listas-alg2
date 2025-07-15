#include <stdio.h>
struct Prod{int cod; char desc[100]; double preco;};
int main(){
    struct Prod p;
    FILE *f=fopen("PRODUTOS.txt","r");
    while(fscanf(f,"%d %99s %lf",&p.cod,p.desc,&p.preco)==3)
        if(p.preco>500) printf("%s\n",p.desc);
    fclose(f);
    return 0;
}
