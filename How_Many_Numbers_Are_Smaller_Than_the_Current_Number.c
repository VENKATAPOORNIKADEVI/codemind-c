#include<stdio.h>
int main(){
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]<a[i])
            {
                c++;
            }
        }
        b[i]=c;
        c=0;
        printf("%d ",b[i]);
    }
    
}