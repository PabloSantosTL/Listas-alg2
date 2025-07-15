#include <stdio.h>
int main(){
    double v,s=0; int c=0;
    while(scanf("%lf",&v)==1 && v>0){s+=v; c++;}
    printf("%.2f\n",c? s/c:0);
    return 0;
}
