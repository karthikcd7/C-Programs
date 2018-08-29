#include<stdio.h>
void main()
{
    int i,r,n,rem;
    input(&n);
    i=n;
    reverse(n,&r,&rem);
    check_palindrome(i,r,n);
}
void input(int *n)
{
    printf("enter the number\n");
    scanf("%d",n);
    
}
void reverse(int n, int *r, int *rem,int i)
{ 
    
    while(n>0)
    {
        *rem = n%10;
        *r = *r*10 + *rem;
        n /= 10;
    }
}
void check_palindrome(int i,int r,int n)
{   
    if(i == r)
    {
        printf("%d is a palindrome",i);
    }
    else 
    {
         printf("%d is not a palindrome",i);
    }
}    
