#include<stdio.h>
int main(){
    int n,i,j,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=0;
        for(j=i+1;j<n;j++)
        {
            if(m<a[j])
            {
                m=a[j];
            }
        }
        a[i]=m;
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            printf("-1");
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
}