#include<stdio.h>
int m(int *a,int n)
{
    int s=a[0];
    int c=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>c+a[i])
        {
            c=a[i];
        }
        else
        {
            c=c+a[i];
        }
        if(s>c)
        {
            s=s;
        }
        else
        {
            s=c;
        }
    }
     return s;
}
    int main(){
        int n,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("%d",m(a,n));
    }
