#include<stdio.h>
int main(){
    int n,i,c,j,k=0,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
         {
             if(a[i]==a[j])
             {
                 c++;
                 if(i!=j)
                 {
                     a[j]=0;
                 }
             }
         }
         if(t==c && a[i]!=0)
         {
             printf("%d ",a[i]);
             k++;
         }
    }
    if(k==0)
    {
        printf("-1");
    }
}