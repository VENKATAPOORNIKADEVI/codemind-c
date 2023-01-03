#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,p,mod;
    scanf("%d%d%d",&a,&b,&c);
    p=pow(a,b);
    mod=p%c;
    printf("%d",mod);
}