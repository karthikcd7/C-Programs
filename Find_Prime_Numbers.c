#include <stdio.h>
#include <math.h>
void input(int *n)
{
	printf("enter the number\n");
	scanf("%d",n);
}
void compute(int n,int *m,int a[n])
{
	int i,j,k=0,fact;

	for(i=2;i<=n;i++)
	{
		fact=1;
		for(j=2;j<=sqrt(n);j++)
		{
			if(i!=j)
			{
				if(i%j==0)
				{
					fact=0;
				}
			}
		}
			if(fact==1)
			{
					a[k]=i;
					k++;		
			}
	}
	*m=k;
}
void output(int m,int a[m])
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("%d\n",a[i]);
	}
}

void main()
{
	int n,m,a[100];
	input(&n);
	compute(n,&m,a);
	output(m,a);
}
