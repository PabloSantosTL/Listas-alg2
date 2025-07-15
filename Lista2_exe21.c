#include <stdio.h>
#include <string.h>
struct Prod{int cod; char desc[100]; double preco;};
int main(){
    int cod;
    scanf("%d",&cod);
    FILE *f=fopen("PRODUTOS.txt","r"),*t=fopen("tmp.txt","w");
    struct Prod p;
    while(fscanf(f,"%d %99s %lf",&p.cod,p.desc,&p.preco)==3)
        if(p.cod!=cod) fprintf(t,"%d %s %.2f\n",p.cod,p.desc,p.preco);
    fclose(f); fclose(t);
    remove("PRODUTOS.txt"); rename("tmp.txt","PRODUTOS.txt");
    return 0;
}
