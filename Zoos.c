#include<stdio.h>
int main(){
    int a=0,b=0,i;
    char ch[20];
    scanf("%s",ch);
    for(i=0;i<20;i++)
    {
        if(ch[i]=='z')
        {
            a++;
        }
        else if(ch[i]=='o')
        {
            b++;
        }
    }
    if(a*2==b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}