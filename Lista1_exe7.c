int perfeito(int n){
    int s=0;
    for(int i=1;i<n;i++)
        if(n%i==0) s+=i;
    return s==n;
}
