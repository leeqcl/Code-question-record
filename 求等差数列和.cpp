#include<stdio.h>

int main()
{
	//a�����b��β�c�ǹ�� 
	int a;
	int b;
	int c;
	int num=0;
	printf("������������ β�� ����\n");
	scanf("%d %d %d",&a,&b,&c);
	
	while( a <= b ){
		num = a + num;
		a = a + c;
	}
	printf("%d",num);
	return 0;
}

