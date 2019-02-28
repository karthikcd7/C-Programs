#include<stdio.h>
void input_num(int *r,int *c)
{
    printf("enter the number of rows and columns of matrix:");
    scanf("%d%d",r,c);

}
void input_ele(int r,int c,int m[r][c])
{
    int i,j;
    printf("Enter the elements of matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
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
  input_num (&r1, &c1);
  input_num (&r2, &c2);
  input_ele (r1,c1,a);
  input_ele (r2,c2,b);
  compute (r1, c1, r2, c2, a, b, product);
  output (r1, c1, r2, c2, product);
}
