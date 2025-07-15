#include <stdio.h>
#include <string.h>
struct Prod{int cod; char desc[100]; double preco;};
int main(){
    struct Prod p; int ok=1;
    scanf("%d %99[^"] %lf",&p.cod,p.desc,&p.preco);
    FILE *f;
    f=fopen("PRODUTOS.txt","r");
    while(fscanf(f,"%d",&p.cod)==1) if(p.cod==p.cod) ok=0;
    fclose(f);
    if(ok){f=fopen("PRODUTOS.txt","a"); fprintf(f,"%d %s %.2f\n",p.cod,p.desc,p.preco); fclose(f);}    
    return 0;
}
