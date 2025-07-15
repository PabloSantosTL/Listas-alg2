void ordena(int a,int b,int c){
    int x,y,z;
    if(a<=b&&a<=c){x=a; y=b<c?b:c; z=b<c?c:b;}
    else if(b<=a&&b<=c){x=b; y=a<c?a:c; z=a<c?c:a;}
    else {x=c; y=a<b?a:b; z=a<b?b:a;}
    printf("%d %d %d\n",x,y,z);
}
