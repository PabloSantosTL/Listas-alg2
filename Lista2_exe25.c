#include <stdio.h>
struct Prod{int cod; char desc[100]; double preco;};
int main(){
    double l,u,d;
    scanf("%lf %lf %lf",&l,&u,&d);
    struct Prod p;
    FILE *f=fopen("PRODUTOS.txt","r+"),*t=fopen("tmp.txt","w");
    while(fscanf(f,"%d %99s %lf",&p.cod,p.desc,&p.preco)==3){
        if(p.preco>=l && p.preco<=u) p.preco*=1-d/100;
        fprintf(t,"%d %s %.2f\n",p.cod,p.desc,p.preco);
    }
    fclose(f); fclose(t);
    remove("PRODUTOS.txt"); rename("tmp.txt","PRODUTOS.txt");
    return 0;
}
