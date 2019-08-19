#include<stdio.h>
void
input ( int *n,int a[])
{
  int i;
  printf ("enter the size of the array\n");
  scanf ("%d", n);
  printf ("enter the elements of the array\n");

  for (i = 0; i < *n; i++)
    {
      scanf ("%d",&a[i]);
    }
}

void
output (int a[], int n)
{
  int i;
  printf ("the array after sorting is:\n");
  for (i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
}

void
swap (int a[], int n)
{
  int temp, i, j;
  for (i = n-1; i >0; i--)
    {
      for (j = n-1; j > 0 ; j--)
	{
	  if (a[j] < a[j-1])
	    {
	      temp = a[j];
	      a[j] = a[j - 1];
	      a[j - 1] = temp;
	    }
else
{
break;
}

	}
}
}

void main ()
{

	int n,a[10];
	input (&n,a);
	swap (a, n);
	output (a, n);
	}

