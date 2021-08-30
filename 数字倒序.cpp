#include<stdio.h>

int main()
{
	int x;
	printf("请输入一个数字\n");
	scanf("%d",&x);
	int dight ;
	int ret = 0;
	while ( x > 0 ){
		dight = x%10;
		ret = ret*10 + dight;
		printf ("x = %d, dight = %d, ret = %d\n",x,dight,ret); 
		x /= 10;
	}
	printf ("数字倒序是%d",ret);
	return 0;
 } 
