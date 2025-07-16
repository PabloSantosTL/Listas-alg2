#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
struct Data { int d, m, y; };
struct Pessoa8 { char nome[100]; struct Data nasc; };
int main(){
    struct Pessoa8 p[6];
    for(int i=0;i<6;i++){
        scanf("%99[^"] %d/%d/%d", p[i].nome,
              &p[i].nasc.d, &p[i].nasc.m, &p[i].nasc.y);
    }
    int idx_min=0, idx_max=0;
    for(int i=1;i<6;i++){
        if( (p[i].nasc.y>p[idx_min].nasc.y) ||
           (p[i].nasc.y==p[idx_min].nasc.y && p[i].nasc.m>p[idx_min].nasc.m) ||
           (p[i].nasc.y==p[idx_min].nasc.y && p[i].nasc.m==p[idx_min].nasc.m && p[i].nasc.d>p[idx_min].nasc.d) )
            idx_min = i;
        if( (p[i].nasc.y<p[idx_max].nasc.y) ||
           (p[i].nasc.y==p[idx_max].nasc.y && p[i].nasc.m<p[idx_max].nasc.m) ||
           (p[i].nasc.y==p[idx_max].nasc.y && p[i].nasc.m==p[idx_max].nasc.m && p[i].nasc.d<p[idx_max].nasc.d) )
            idx_max = i;
    }
    printf("Mais nova: %s\nMais velha: %s\n", p[idx_min].nome, p[idx_max].nome);
    return 0;
}
