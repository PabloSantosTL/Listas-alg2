#include <stdio.h>
#include <string.h>
struct Prod{int cod; char desc[100]; double preco;};
int main(){
    struct Prod p;
    FILE *f=fopen("PRODUTOS.txt","r"),*t=fopen("tmp.txt","w");
    while(fscanf(f,"%d %99s %lf",&p.cod,p.desc,&p.preco)==3)
        if(p.preco<=200) fprintf(t,"%d %s %.2f\n",p.cod,p.desc,p.preco);
    fclose(f); fclose(t);
    remove("PRODUTOS.txt"); rename("tmp.txt","PRODUTOS.txt");
    return 0;
}
