#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
struct Atleta { char nome[100]; char esporte[50]; int idade; float altura; };
int main(){
    struct Atleta a[5];
    for(int i=0;i<5;i++) scanf("%99[^"] %49s %d %f", a[i].nome, a[i].esporte, &a[i].idade, &a[i].altura);
    int idx_alt=0, idx_id=0;
    for(int i=1;i<5;i++){
        if(a[i].altura>a[idx_alt].altura) idx_alt=i;
        if(a[i].idade>a[idx_id].idade) idx_id=i;
    }
    printf("Mais alto: %s\nMais velho: %s\n", a[idx_alt].nome, a[idx_id].nome);
    // 10 ordena por idade desc
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[j].idade>a[i].idade){ struct Atleta t=a[i]; a[i]=a[j]; a[j]=t; }
        }
    }
    for(int i=0;i<5;i++) printf("%s %d\n", a[i].nome, a[i].idade);
    return 0;
}
