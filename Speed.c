#include<stdio.h>
int main(){
    int s,k;
    scanf("%d",&s);
    for(k=0;k<s;k++)
    {
        int n;
        scanf("%d",&n);
        int i,a[n],j,c=1,m;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        if(n==1)
        {
            printf("1
");
        }
        else
        {
            for(i=n-1;i>=0;i--)
            {
                m=0;
                for(j=i-1;j>=0;j--)
                {
                if(a[i]>=a[j])
                {
                    m=1;
                    break;
                }
                }
            if(m==0)
            {
                c=c+1;
            }
            
        }
        printf("%d
",c-1);
    } 
    }
}