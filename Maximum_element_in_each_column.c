#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,l=a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        l=a[0][0];
        for(i=0;i<r;i++)
        {
            if(l<a[i][j])
            {
                l=a[i][j];
            }
        }
        printf("%d
",l);
    }
}