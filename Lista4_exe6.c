#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
struct Aluno { int matricula; char nome[100]; float notas[3]; };
int main(){
    struct Aluno a[5];
    for(int i=0;i<5;i++){
        scanf("%d %99[^"] %f %f %f", &a[i].matricula, a[i].nome,
              &a[i].notas[0], &a[i].notas[1], &a[i].notas[2]);
    }
    int idx=0;
    float maior = (a[0].notas[0]+a[0].notas[1]+a[0].notas[2])/3;
    for(int i=1;i<5;i++){
        float m = (a[i].notas[0]+a[i].notas[1]+a[i].notas[2])/3;
        if(m>maior){ maior=m; idx=i; }
    }
    printf("%s %.2f %.2f %.2f\n", a[idx].nome,
           a[idx].notas[0], a[idx].notas[1], a[idx].notas[2]);
    return 0;
}
