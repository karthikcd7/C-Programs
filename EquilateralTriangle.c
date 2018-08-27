#include<stdio.h>
void main()
{
int n;
input(&n);
print_triangle(n);

}
void input(int *n)
{
  printf("enter the number of rows\n");
  scanf("%d",n);
}
void print_triangle(int n)
{int i,j;
for(i=1;i<=n;i++)
{
   for(j=i;j<n;j++)
   {
   printf(" ");
   }
   for(j=1;j<=(2*i-1);j++)
   {
   printf("*");
   }
   printf("\n");
} 
}


