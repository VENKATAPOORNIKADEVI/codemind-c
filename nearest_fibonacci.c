#include<stdio.h>
int main(){
    int f=0,s=1,ne=0,n;
    scanf("%d",&n);
   while(n>ne)
   {
       ne=f+s;
       f=s;
       s=ne;
   }
   if(n-f<s-n)
   {
       printf("%d",f);
   }
   else if(n-f==s-n)
   {
       printf("%d %d",f,s);
   }
   else
   {
       printf("%d",s);
   }
}