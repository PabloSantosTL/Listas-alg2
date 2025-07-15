void tempo(int t){
    int h=t/3600;
    int m=(t%3600)/60;
    int s=t%60;
    printf("%dh %dm %ds\n",h,m,s);
}
