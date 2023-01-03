#include<stdio.h>
int main(){
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,s=0;
    scanf("%d",&b);
     int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        c=a[i]+b;
        if(c>=max)
        {
           printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}