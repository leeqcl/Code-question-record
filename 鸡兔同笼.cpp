#include<stdio.h>

int main()
{
	//�����ù���һ�����������2ֻ�ţ�����4ֻ�ţ�û�����⡣��֪���ڿ��Կ���������m��ͷ��nֻ�ţ��󼦺����Ӹ��ж���ֻ��
	//������������heads��feet���ֱ����������ͷ�ĸ����ͽŵĸ�����(����heads��feet���ںϷ������ݷ�Χ��)
	//������������õ�ֻ����������Ϊ0��ҲҪ�����
	int heads,feet;
	
	int c,r;
	
	scanf("%d %d",&heads,&feet);
	
	c = (4*heads-feet)/2;
	 
	r = heads - c;
	
	printf("%d %d",c,r);
	
	return 0;
}
