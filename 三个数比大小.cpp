#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int max=0;
	
	if( a>b ){
		if(a>c){
			max=a;
		}else{
			max=c;
		}
	}if(a<b){
		if(c<b){
			max=b;
		}else{
			max=c;
		}
	}
	
	printf("max=%d",max); 
	
	return 0;
}
 
