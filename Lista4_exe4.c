#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
struct Ret { struct Ponto sup_esq, inf_dir; };
int main(){
    struct Ret r;
    scanf("%lf %lf %lf %lf", &r.sup_esq.x, &r.sup_esq.y, &r.inf_dir.x, &r.inf_dir.y);
    double largura = fabs(r.inf_dir.x - r.sup_esq.x);
    double altura = fabs(r.sup_esq.y - r.inf_dir.y);
    double area = largura * altura;
    double diag = sqrt(largura*largura + altura*altura);
    double peri = 2*(largura + altura);
    printf("Area: %.2f\nDiagonal: %.2f\nPerimetro: %.2f\n", area, diag, peri);
    return 0;
}
