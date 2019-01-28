#include<stdio.h>
#include<complex.h>
#include<math.h>
void input (float *a, float *b, float *c)
{
  printf ("enter a,b,c");
  scanf ("%f%f%f", a, b, c);
}

void
compute (double complex * z1, double complex * z2, float *d, float a, float b,
	 float c)
{
  *d = (b * b) - (4 * a * c);
  if (d == 0)
    {
      *z1 = -b / (2 * a);
      *z2 = 0;
    }
  else if (d > 0)
    {
      *z1 = (-b + sqrt (*d)) / (2 * a);
      *z2 = (-b - sqrt (*d)) / (2 * a);
    }
  else if (d < 0)
    { 
      *z1 = (-b / (2 * a)) + ((csqrt (*d)) / (2 * a))*I;
      *z2 = (-b / (2 * a)) - ((csqrt (*d)) / (2 * a))*I;
    }
}

void
output (double complex z1, double complex z2, float d, float a, float b,
	float c)
{
  if (d == 0)
    {
      printf ("the solution is real and equal\n");
      printf (" %f", creal (z1));
    }
  else if (d > 0)
    {
      printf ("the solution is real\n");
      printf (" %f and %f", creal (z1), creal (z2));
    }
  else if (d < 0)
    {
      printf ("the solution is imaginary\n");
      printf (" %f + %f and %f - %f", creal (z1), cimag (z1), creal (z2),
	      cimag (z2));
    }
}

void
main ()
{
  float a, b, c, d;
  double complex z1, z2;
  input (&a, &b, &c);
  compute (&z1, &z2, &d, a, b, c);
  output (z1, z2, d, a, b, c);
}
