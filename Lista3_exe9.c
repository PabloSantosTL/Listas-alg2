#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* invertString(const char *s){
    int n=strlen(s);
    char *r=malloc(n+1);
    for(int i=0;i<n;i++) r[i]=s[n-1-i];
    r[n]='\0';
    return r;
}
int main(){
    char buf[100];
     scanf(" %99[^"]", buf);
    char *inv=invertString(buf);
     printf("%s\n", inv);
    free(inv); 
    return 0;
    }
