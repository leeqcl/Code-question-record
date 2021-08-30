#include<stdio.h>

int main()
{
	//树苗量m 人数n
	int m,n;
    printf("依次输入树苗量与人数\n");
	scanf("%d %d",&m,&n);
	
	int a,b;
	
	a = m/n;
	
	b = m%n;
	
	printf("每人种值树苗%d 剩余树苗%d",a,b);
	
	return 0;
}
