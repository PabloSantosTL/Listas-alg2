#include <stdio.h>
struct Prod{int cod; char desc[100]; double preco;};
int main(){
    char c; double l,u;
    scanf(" %c %lf %lf",&c,&l,&u);
    struct Prod p;
    FILE *f=fopen("PRODUTOS.txt","r");
    while(fscanf(f,"%d %99s %lf",&p.cod,p.desc,&p.preco)==3)
        if(p.desc[0]==c && p.preco>=l && p.preco<=u)
            printf("%d %s %.2f\n",p.cod,p.desc,p.preco);
    fclose(f);
    return 0;
}
