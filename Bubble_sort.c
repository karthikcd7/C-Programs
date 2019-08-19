#include<stdio.h>
void
input (int *n, int a[*n])
{
  int i;
  printf ("enter the size of the array\n");
  scanf ("%d", n);
  printf ("enter the elements of the array\n");

  for (i = 0; i < *n; i++)
    {
      scanf ("%d", &a[i]);
    }
}

void
output (int n,int a[n])
{
  int i;
  printf ("the array after sorting is:\n");
  for (i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
}

void
swap (int n,int a[n])
{
  int temp, i, j, flag;
  for (i = 0; i <n-1; i++)
    {
      flag = 0;
      for (j = 0; j <n - i-1; j++)
	{
	  if (a[j] > a[j + 1])
	    {
	      flag = 1;
	      temp = a[j];
	      a[j] = a[j + 1];
	      a[j + 1] = temp;
	    }


	}
      if (flag = 0)
	{
	  break;
	}
    }
}

void
main ()
{

  int n, a[10];
  input (&n, a);
  swap (n,a);
  output ( n,a);
}
