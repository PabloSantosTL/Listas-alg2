#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
struct Ponto { double x, y; };
int main(){
    struct Ponto pt;
    scanf("%lf %lf", &pt.x, &pt.y);
    double d = sqrt(pt.x*pt.x + pt.y*pt.y);
    printf("%.2f\n", d);
    return 0;
}
