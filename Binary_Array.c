#include<stdio.h>
int main(){
    int n,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0 && a[i]!=1)
        {
            s=1;
        }
    }
    if(s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}