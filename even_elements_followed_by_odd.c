#include<stdio.h>
int main(){
    int i,n,f,b,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&f,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
          printf("%d ",a[i]);
    }
    }
}