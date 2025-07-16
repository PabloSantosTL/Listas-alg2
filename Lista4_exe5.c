#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(){
    struct Ret r;
    struct Ponto p;
    scanf("%lf %lf %lf %lf %lf %lf", &r.sup_esq.x, &r.sup_esq.y,
          &r.inf_dir.x, &r.inf_dir.y, &p.x, &p.y);
    double xmin = fmin(r.sup_esq.x, r.inf_dir.x);
    double xmax = fmax(r.sup_esq.x, r.inf_dir.x);
    double ymin = fmin(r.inf_dir.y, r.sup_esq.y);
    double ymax = fmax(r.inf_dir.y, r.sup_esq.y);
    int inside = (p.x>=xmin && p.x<=xmax && p.y>=ymin && p.y<=ymax);
    printf("%s\n", inside?"Dentro":"Fora");
    return 0;
}
