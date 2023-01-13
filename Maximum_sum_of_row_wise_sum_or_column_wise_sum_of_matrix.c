#include<stdio.h>
int main(){
    int r,c,m1=0,m2=0,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        int s=0;
        for(j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
        if(s>m1)
        {
            m1=s;
        }
    }
    for(i=0;i<c;i++)
    {
        int s=0;
        for(j=0;j<r;j++)
        {
            s=s+a[j][i];
        }
    if(s>m2)
    {
        m2=s;
    }
    }
    if(m1<m2)
    {
        m1=m2;
    }
    printf("%d",m1);
}
