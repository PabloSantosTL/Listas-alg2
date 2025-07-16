#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
struct Hora { int h, m, s; };
int main(){
    struct Hora v[5];
    for(int i=0;i<5;i++) scanf("%d %d %d", &v[i].h, &v[i].m, &v[i].s);
    int idx=0;
    int maxs = v[0].h*3600 + v[0].m*60 + v[0].s;
    for(int i=1;i<5;i++){
        int secs = v[i].h*3600 + v[i].m*60 + v[i].s;
        if(secs>maxs){ maxs=secs; idx=i; }
    }
    printf("%02d:%02d:%02d\n", v[idx].h, v[idx].m, v[idx].s);
    return 0;
}
