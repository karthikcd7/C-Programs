#include <stdio.h>
void input(int *n)
{
	printf("Enter the number");
	scanf("%d",n);
}
void compute(int n,int a[n])
{
	int i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
}
void output(int n,int a[n])
{
	int i;
	printf("Fibonacci series:");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}		
void main()
{
	int n;
	input(&n);
	int a[n];
	compute(n,a);
	output(n,a);
}
