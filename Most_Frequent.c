#include<stdio.h>
int main()
{
    int n,i,arr[100],mf,m,c,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(m<c)
        {
            mf=arr[i];
            m=c;
        }
        else if(m==c)
        {
            if(mf>arr[i])
            {
                mf=arr[i];
            }
        }
    }
    printf("%d",mf);
}