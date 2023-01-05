#include<stdio.h>
int main(){
    int n,i,j,c=0,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c=1;
            }
        }
        if(c==0)
        {
            if(m<a[i])
            {
                m=a[i];
            }
        }
    }
    if(m==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}