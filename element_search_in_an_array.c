#include<stdio.h>
int main(){
    int n,i,flag=0,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
 scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}