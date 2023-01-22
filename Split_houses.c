#include<stdio.h>
#include<string.h>
int main(){
    int n,c=0,i;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='H' && a[i+1]=='H')
        {
            c=1;
        }
        else
        {
            if(a[i]=='.')
            {
                a[i]='B';
            }
        }
    }
    if(c==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES
");
        printf("%s",a);
    }
}