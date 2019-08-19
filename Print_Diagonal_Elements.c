#include<stdio.h>
void input_num (int *r, int *c)
{
	printf ("Enter the number of rows and columns of matrix:");
	scanf ("%d%d", r, c);

}

void input_ele (int r, int c, int m[r][c])
{
	int i,j;
	printf("enter the elements of the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m[i][j]);

		}
	}
}
void compute_output(int r,int c,int m[r][c])
{
	int i,j;
	if(r==c)
	{
		printf("Diagonal elements are:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				{
				printf("%d ",m[i][i]);
				}
			}
		}
	}
	else
	{
		printf("It is not a square matrix \n");
	}
}

void main()
{
	int r,c,m[10][10];
	input_num(&r,&c);
	input_ele(r,c,m);
	compute_output(r,c,m);

}
