#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a=0,b=0,d,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(i%2)
        {
            b=b+ar[i];
        }
        else
        {
            a=a+ar[i];
        }
    }
    d=abs(a-b);
    if(d%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}