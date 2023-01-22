#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i,c=0,j=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            c++;
        }
        else
        {
            if(c>j)
            {
                j=c;
                c=0;
            }
        }
    }
    printf("%d",j);
}
