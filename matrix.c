#include<stdio.h>
void input1(int *r1,int *c1, int *r2, int *c2)
{
    printf("enter the number of rows and columns of matrix1:");
    scanf("%d%d",r1,c1);
    printf("enter the number of rows and colums of matrix2:");
    scanf("%d%d",r2,c2);

}
void input2(int r1,int c1,int r2,int c2,int a[r1][c1],int b[r2][c2])
{
    int i,j;
    printf("Enter the elements of matrix1:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix2:");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
}
void compute (int r1, int c1, int r2, int c2, int a[r1][c1], int b[r2][c2],int product[r1][c2])
{
  int i, j, k, sum = 0;
  if (c1 == r2)
    {
      for (i = 0; i < r1; i++)
	  {
	  for (j = 0; j < c2; j++)
	    {
	      for (k = 0; k < r2; k++)
		  {
		        sum = sum + a[i][k] * b[k][j];
		        
		  }
	      product[i][j] = sum;
	      sum=0;
	      
	    }
	  }
    }
}


void output (int r1, int c1, int r2, int c2, int product[r1][c2])
{
  int i, j;
  for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
	{
	  printf ("%d ", product[i][j]);
	}
      printf ("\n");
    }

}

void main ()
{
  int r1, c1, r2, c2, a[100][100], b[100][100], product[100][100];
  input1 (&r1, &c1, &r2, &c2);
  input2 (r1,c1,r2,c2,a,b);
  compute (r1, c1, r2, c2, a, b, product);
  output (r1, c1, r2, c2, product);
}
