#include<stdio.h>
#include<complex.h>
#include<math.h>
typedef struct root
{
float r1;
float r2;
}num;
void input(float *a,float *b,float *c)
{
printf("enter a,b,c\n");
scanf("%f%f%f ",a,b,c);

}
void compute(float *d,float a,float b,float c,num *r)
{
*d=((b*b)-(4*a*c));
if(*d==0)
{
r->r1=-b/2*a;
}
else if(*d>0)
{
r->r1=(-b+sqrt(*d))/(2*a);
r->r2=(-b-sqrt(*d))/(2*a);
}
else
{
r->r1=(b/(2*a));
r->r2=((*d)/(2*a));
}
}
void output(float *d,float a,float b,float c,num *r)
{
if(*d==0)
{
printf("\nsolution is real and equal\n");
printf("%f",r->r1);
}
else if(*d>0)
{
printf("\nsolution is real and distinct\n");
printf("%f and %f",r->r1,r->r2);
}
else
{
printf("\nsolution is imaginary\n");
printf("%f + (%f)i and %f - (%f)i",r->r1,r->r2,r->r1,r->r2);
}
}
void main()
{
float a,b,c,d;
num r;

input(&a,&b,&c);
compute(&d,a,b,c,&r);
output(&d,a,b,c,&r);
}














