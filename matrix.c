#include<stdio.h>
void
input (int *r1, int *c1, int *r2, int *c2, int a[*r1][*c1], int b[*r2][*c2])
{
  int i, j;
  printf ("enter the number of rows and columns of matrix 1: ");
  scanf ("%d%d",r1,c1);
  printf ("enter the elements of matrix 1:");
  for (i = 0; i < *r1; i++)
    {
      for (j = 0; j < *c1; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  printf ("enter the number of rows and columns of matrix 2: ");
  scanf ("%d%d",r2, c2);
  printf ("enter the elements of matrix 2:");
  for (i = 0; i < *r2; i++)
    {
      for (j = 0; j < *c2; j++)
	{
	  scanf ("%d", &b[i][j]);
	}
    }
}

void
multiply (int r1, int c1, int r2, int c2, int a[r1][c1], int b[r2][c2],
	  int product[r1][c2])
{
  int i, j, k;
      for (i = 0; i < r1; i++)
	{
	  for (j = 0; j < c2; j++)
	    {
	      for (k = 0; k < r2; k++)
		{
		  product[i][j] = product[i][j]+ a[i][k] * b[k][j];
		}

	    }
	}
    }


void
output (int r1, int c1, int r2, int c2, int product[r1][c2])
{
  int i, j;
  if (r1 != c2)
    {
      printf ("matrix multiplication not possible");
    }
  else
    {
      for (i = 0; i < r1; i++)
	{
	  for (j = 0; j < c2; j++)
	    {
	      printf ("%d \t", product[i][j]);
	    }
	  printf ("\n");
	}
    }
}


void
main ()
{
  int r1, c1, r2, c2, a[100][100], b[100][100], product[100][100];
  input (&r1, &c1, &r2, &c2, a, b);
  multiply (r1, c1, r2, c2, a, b, product);
  output (r1, c1, r2, c2, product);
}
