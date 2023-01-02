#include<stdio.h>
int main(){
    int n,i,m,t,s,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        m=t;
        s=0;
        while(t)
        {
            d=t%10;
            t=t/10;
            s=s*10+d;
        }
        if(s==m)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
    }
}