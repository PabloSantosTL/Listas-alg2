#include <stdio.h>
struct Prod{int cod; char desc[100]; double preco;};
int main(){
    struct Prod p;
    FILE *f=fopen("PRODUTOS.txt","r+");
    while(fscanf(f,"%d %99s %lf",&p.cod,p.desc,&p.preco)==3){
        p.preco*=1.15;
        fseek(f,-sizeof(p),SEEK_CUR);
        fprintf(f,"%d %s %.2f\n",p.cod,p.desc,p.preco);
    }
    fclose(f);
    return 0;
}
