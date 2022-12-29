#include<stdio.h>
int main(){
    int a,i,l=0,rem;
    scanf("%d",&a);
    for(i=1;a>i;i++)
    {
        rem=a%10;
        a=a/10;
        if(l<rem)
        {
            l=rem;
        }
    }
    printf("%d",l);
}