#include<stdio.h>
#define PI 3.14159

int main()
{
	double r,h,s;
	scanf("%lf %lf",&r,&h);
	s = 2*r*PI*h + 2*PI*r*r;
	printf("%.2lf",s);
	return 0;
}
