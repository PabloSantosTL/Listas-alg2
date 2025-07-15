#include <stdio.h>
int main(){
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);
    if(x<y+z&&y<x+z&&z<x+y){
        if(x==y&&y==z) printf("Equilatero\n");
        else if(x==y||y==z||x==z) printf("Isosceles\n");
        else printf("Escaleno\n");
    }
    return 0;
}
