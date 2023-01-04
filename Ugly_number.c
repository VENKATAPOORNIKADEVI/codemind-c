#include<stdio.h>
#include<string.h>
int main(){
    int n,a=0;
    scanf("%d",&n);
    if(n<=0)
    {
        
    }
    while(n!=1)
    {
        if(n%5==0)
        {
            n=n/5;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            printf("Not Ugly Number");
            a=1;
            break;
        }
        
    }
    if(a==0)
    {
        printf("Ugly Number");
    }
}