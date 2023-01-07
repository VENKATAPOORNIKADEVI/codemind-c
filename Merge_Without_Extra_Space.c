#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    for(m=0;m<n;m++)
    {
        int i,j,a,b,ar[100];
        scanf("%d%d",&a,&b);
        for(i=0;i<(a+b);i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i=0;i<(a+b);i++)
        {
            for(j=i+1;j<(a+b);j++)
            {
                if(ar[i]>ar[j])
                {
                    int t=ar[i];
                    ar[i]=ar[j];
                    ar[j]=t;
                }
            }
        }
        for(i=0;i<(a+b)-1;i++)
        {
            printf("%d ",ar[i]);
        }
        printf("%d
",ar[i]);
    }
}