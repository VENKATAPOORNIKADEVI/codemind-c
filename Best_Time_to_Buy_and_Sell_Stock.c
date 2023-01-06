#include<stdio.h>
int main(){
    int n,i,j,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int d=a[j]-a[i];
            if(d>max)
            {
                max=d;
            }
        }
    }
    printf("%d",max);
}