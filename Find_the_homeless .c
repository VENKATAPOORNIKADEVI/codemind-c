#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    int c,ct=0;
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]<=b[j])
            {
                b[j]=0;
                c=0;
                break;
            }
        }
        if(c!=0)
        {
            ct=ct+1;
        }
    }
    printf("%d",ct);
}