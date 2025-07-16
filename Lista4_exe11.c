#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(){
    struct Data d1, d2;
    scanf("%d/%d/%d %d/%d/%d", &d1.d,&d1.m,&d1.y, &d2.d,&d2.m,&d2.y);
    struct tm t1={.tm_year=d1.y-1900, .tm_mon=d1.m-1, .tm_mday=d1.d};
    struct tm t2={.tm_year=d2.y-1900, .tm_mon=d2.m-1, .tm_mday=d2.d};
    time_t tt1 = mktime(&t1);
    time_t tt2 = mktime(&t2);
    double diff = fabs(difftime(tt2, tt1))/86400.0;
    printf("%.0f\n", diff);
    return 0;
}
