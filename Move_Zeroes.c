#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0,t;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}