#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ocorrencia(const char *s, const char *t){
    for(; *s; s++){
        const char *p = s, *q = t;
        while(*q && *p == *q){ p++; q++; }
        if(!*q) return 1;
    }
    return 0;
}
int main(){
    char s1[100], s2[100];
    scanf(" %99[^"] %99[^"]", s1, s2);
    printf("%d\n", ocorrencia(s1, s2));
    return 0;
}
