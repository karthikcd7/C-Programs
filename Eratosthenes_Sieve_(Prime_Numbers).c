#include <stdio.h>
#include <math.h>
void input(int *n)
{
	printf("enter the number\n");
	scanf("%d",n);
}
void getprimes(int n,int primes[n+1])
{
	int i,j;
	for(i=2;i<=n;i++)
	{
		primes[i]=i;
	}
	for(i=2;i<=sqrt(n);i++)
	{
		for(j=2*i;j<=n;j=j+i)
		{
			primes[j]=-1;
		}
	}
}
void output(int n,int primes[n+1])
{
	int i;
	for(i=2;i<n;i++)
	{
		if(primes[i]!=-1)
		{
			printf("%d\n",i);
		}
	}
}

void main()
{
	int n;
	input(&n);
	int primes[n+1];
	getprimes(n,primes);
	output(n,primes);
	
}
