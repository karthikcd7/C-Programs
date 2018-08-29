#include<stdio.h>
void  main()
{
    int a,b,c;
    input(&a,&b,&c);
    greatest_number(a,b,c);
}
void input(int *a,int*b,int*c)
{
    printf("enter three numbers\n");
    scanf("%d %d %d",a,b,c);
}
void greatest_number(int a,int b,int c)
{
    if((a>b)&&(a>c))
    {
        printf("%d is the largest number",a);
    }
    else if((b>a)&&(b>c))
    {
        printf("%d is the largest number",b);
    }
    else
    {
        printf("%d is the largest number",c);
    }
}
