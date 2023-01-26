#include<stdio.h>
int main()
{
	int m,n,a[100],j,w,r,i,p;
	scanf("%d",&w);
for(r=0;r<w;r++)
  {
	scanf("%d%d",&m,&n);
	for(j=0;j<m;j++)
	{
		scanf("%d",&a[j]);
	}
	for(i=0;i<n;i++)
	{ 
	    p=a[m-1];
		for(j=m-1;j>0;j--)
		{
		  a[j]=a[j-1];	
		}
		a[0]=p;
	}
	for(j=0;j<m-1;j++)
	{
		printf("%d ",a[j]);
	}
    printf("%d
",a[m-1]);
  }
}