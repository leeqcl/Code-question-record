#include<stdio.h>

int main()
{
	int x;
	printf("������һ������\n");
	scanf("%d",&x);
	int dight ;
	int ret = 0;
	while ( x > 0 ){
		dight = x%10;
		ret = ret*10 + dight;
		printf ("x = %d, dight = %d, ret = %d\n",x,dight,ret); 
		x /= 10;
	}
	printf ("���ֵ�����%d",ret);
	return 0;
 } 
