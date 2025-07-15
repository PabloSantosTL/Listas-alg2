void bhaskara(double a,double b,double c){
    double d=b*b-4*a*c;
    if(d<0) return;
    double r1=(-b+sqrt(d))/(2*a);
    double r2=(-b-sqrt(d))/(2*a);
    printf("R1=%.2f R2=%.2f\n",r1,r2);
}
