#include<stdio.h>

int main()
{
	//a是首项，b是尾项，c是公差。 
	int a;
	int b;
	int c;
	int num=0;
	printf("依次输入首项 尾项 公差\n");
	scanf("%d %d %d",&a,&b,&c);
	
	while( a <= b ){
		num = a + num;
		a = a + c;
	}
	printf("%d",num);
	return 0;
}

