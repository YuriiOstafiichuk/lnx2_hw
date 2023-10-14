#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

	/*adding varaibles for math*/
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	double g;
	double h;
	int i;
	double j;

	printf("enter first number to calculate summ: ");
	scanf("%i", &a);
	printf("enter second number to calculate summ: ");
	scanf("%i", &b);
	printf("%d + %d = %ld\n", a, b, add(a,b));

	printf("enter first number to calculate diff: ");
	scanf("%i", &c);
	printf("enter second number to calculate diff: ");
	scanf("%i", &d);
	printf("%d - %d = %ld\n", c, d, diff(c,d));

	printf("enter first number to calculate production: ");
	scanf("%i", &e);
	printf("enter second number to calculate production: ");
	scanf("%i", &f);
	printf("%d * %d = %ld\n", e, f, prod(e,f));

	printf("enter first number to calculate fraction: ");
	scanf("%lf", &g);
	printf("enter second number to calculate fraction: ");
	scanf("%lf", &h);
	printf("%f / %f = %f\n", g, h, fract(g,h));

	printf("Enter the number to calculate the factorial: ");
	scanf("%i", &i);
	printf("fact(%d)= %lu\n",i, fact(i));

	printf("Enter the number to calculate the square root: ");
	scanf("%lf", &j);
	printf("square root of (%f) = %f\n",j, sqroot(j));

  return 0;
}
