#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(){
    struct Ponto a, b;
    scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y);
    double d = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    printf("%.2f\n", d);
    return 0;
}
