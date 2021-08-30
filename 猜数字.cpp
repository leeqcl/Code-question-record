#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int number = rand()%100 + 1;
	int count = 0;
	int a = 0;
	printf ("我已经想好了一个数字。\n");
	do{
		printf ("你要猜的数是：");
		scanf ("%d",&a);
		count++;
		if (a>number){
			printf ("你猜的数大了。\n"); 
		} else if (a<number){
			printf ("你猜的数小了。\n"); 
		}
	} while ( a != number);
	printf ("你用了%d次猜到了数字",count); 
}

