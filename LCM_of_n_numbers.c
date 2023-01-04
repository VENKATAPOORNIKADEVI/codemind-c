#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=2;
    while(n!=0)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(l%a[i]==0)
            {
                c++;
            }
        }
        if(n==c)
        {
            printf("%d",l);
            break;
        }
        l++;
        
    }
}