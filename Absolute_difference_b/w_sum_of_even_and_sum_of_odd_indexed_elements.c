#include<stdio.h>
int main(){
    int n,i,odd=0,even=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    int diff;
    diff=even-odd;
    printf("%d",diff);
    
}