#include <stdio.h>
int main(){
    double nota; scanf("%lf",&nota);
    if(nota<5) printf("D\n");
    else if(nota<7) printf("C\n");
    else if(nota<9) printf("B\n");
    else printf("A\n");
    return 0;
}
