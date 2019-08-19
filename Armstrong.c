#include<stdio.h>
#include<math.h>
void input(int *n,int *i)
{
	printf("Enter the number:\n");
	scanf("%d",n);
	*i=*n;
}
void digits(int *d,int n)
{int m=0;
	while (n>0)
	{
		n=n/10;
		m++;
	}
	*d=m;
}
void check(int n,int *reverse,int d)
{
	int rem,ri=0;
	while(n>0)
	{
		rem=n%10;
		ri+=pow(rem,d);
		n=n/10;
	}
	*reverse=ri;

}
void output(int reverse,int i)
{
	if(reverse==i)
	{
	printf("%d is an armstrong number.",i);
	}
	else 
	{
		printf("%d is not an armstrong number",i);
	}

}
void main()
{
	int i,n,d,reverse;
	input(&n,&i);
	digits(&d,n);
	check(n,&reverse,d);
	output(reverse,i);
	
}
