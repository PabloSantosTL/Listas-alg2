#include <stdio.h>
int main(){
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b&&a<=c){x=a; y=b<c?b:c; z=b<c?c:b;}
    else if(b<=a&&b<=c){x=b; y=a<c?a:c; z=a<c?c:a;}
    else {x=c; y=a<b?a:b; z=a<b?b:a;}
    printf("%d %d %d\n",x,y,z);
    return 0;
}
