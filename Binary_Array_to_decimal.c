#include<stdio.h>
#include<math.h>
int main(){
    int i,n,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i])
        {
            d+=pow(2,i);
        }
    }
    printf("%d",d);
}