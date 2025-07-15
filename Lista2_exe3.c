#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct Cliente{int Cod; char Nome[100]; char Endereco[100]; char Fone[20];};
struct Rec{int Num; double Valor; char Emi[11]; char Ven[11]; int CodCli;};
int main(){
    struct Rec r; bool ok=false;
    scanf("%d %lf %10s %10s %d",&r.Num,&r.Valor,r.Emi,r.Ven,&r.CodCli);
    FILE *fc=fopen("Clientes.dat","rb");
    while(fread(& (struct Cliente){0},sizeof(struct Cliente),1,fc)){
        fseek(fc,-sizeof(struct Cliente),SEEK_CUR);
        struct Cliente tmp; fread(&tmp,sizeof(tmp),1,fc);
        if(tmp.Cod==r.CodCli) ok=true;
    }
    fclose(fc);
    if(ok){
        FILE *fr=fopen("Recebimentos.dat","ab");
        fwrite(&r,sizeof(r),1,fr);
        fclose(fr);
    }
    return 0;
}
