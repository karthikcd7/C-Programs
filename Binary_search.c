#include<stdio.h>
void
input (int a[], int *n, int *ele)
{
  int i;
  printf ("enter the size of the array\n");
  scanf ("%d", n);
  printf ("enter the elements of the array in ascending order\n");
  for (i = 0; i < *n; i++)
    {
      scanf ("%d", &a[i]);
    }
  printf ("enter the search element");
  scanf ("%d", ele);

}

void
output (int a[], int loc)
{
  if (loc > 0)
    {
      printf ("the location of the element is: %d \n", ++loc);
    }
  else
    {
      printf ("element not found");
    }
}

void
search (int a[], int n, int ele, int *loc)
{
  int first, last, mid;
  first = 0;
  last = n - 1;
  mid = ((first + last) / 2);

  while (first <= last)
    {
      mid = ((first + last) / 2);
      if (a[mid] == ele)
	{
	  *loc = mid;
	  break;
	}
      else if (a[mid] < ele)
	{
	  first = mid + 1;
	}
      else
	{
	  last = mid - 1;
	}


    }
}

void
main ()
{
  int n, a[10], ele, loc = -1;
  input (a, &n, &ele);
  search (a, n, ele, &loc);
  output (a, loc);
}
