#include<stdio.h>
#include<math.h>
typedef struct complex
{
float real;
float imag;
}COMPLEX;
void input(float *a,float *b,float *c)
{
printf("enter a,b,c\n");
scanf("%f%f%f",a,b,c);

}
void compute(float *d,float a,float b,float c,COMPLEX *r1,COMPLEX *r2)
{
*d=((b*b)-(4*a*c));
if(*d==0)
{
r1->real=-b/2*a;
}
else if(*d>0)
{
r1->real=(-b+ sqrt(*d))/(2*a);
r2->real=(-b- sqrt(*d))/(2*a);
}
else
{
r1->real=r2->real=(b/(2*a));
r1->imag=r2->imag=((*d)/(2*a));
}
}
void output(float *d,float a,float b,float c,COMPLEX *r1, COMPLEX *r2)
{
if(*d==0)
{
printf("\nsolution is real and equal\n");
printf("%f",r1->real);
}
else if(*d>0)
{
printf("\nsolution is real and distinct\n");
printf("%f and %f",r1->real,r2->real);
}
else
{
printf("\nsolution is imaginary\n");
printf("%f + (%f)i and %f - (%f)i",r1->real,r1->imag,r2->real,r2->imag);
}
}
void main()
{
float a,b,c,d;
COMPLEX r1,r2;
input(&a,&b,&c);
compute(&d,a,b,c,&r1,&r2);
output(&d,a,b,c,&r1,&r2);
}













