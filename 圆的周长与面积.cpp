#include<stdio.h>
#define PI 3.14159

int main()
{
	printf("请输入圆的半径\n"); 
	int r;
	double c,s;
	scanf("%d",&r);
	c = PI*2*r;
	s = PI*r*r;
	printf("周长%.2lf 面积%.2lf",c,s);
	return 0;
}
