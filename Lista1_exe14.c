double mediaA(){
    double v,s=0;
    int c=0;
    while(scanf("%lf",&v)==1 && v>0){
        s+=v;
        c++;
    }
    return c? s/c:0;
}
