#include<stdio.h>
int main(){
    int alice=0,bob=0,i;
    int a[3],b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            alice++;
        }
        else if(a[i]<b[i])
        {
            bob++;
        }
        
    }
    printf("%d ",alice);
    printf("%d",bob);
    
}