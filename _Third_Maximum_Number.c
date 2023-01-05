#include<stdio.h>
int main(){
    int n,i,a=-1,b=-1,c=-1;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>a)
        {
            a=ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>b && ar[i]!=a)
        {
            b=ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>c && ar[i]!=b && ar[i]!=a) 
        {
            c=ar[i];
        }
    }
    if(c==-1)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",c);
    }
    
}