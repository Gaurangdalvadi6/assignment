#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10,b=20;
	clrscr();
	a=a+b;    //10+20=30
	b=a-b;   // 30-20=10
	a=a-b;   //30-10=20

	printf("value of a is=%d \n",a);
	printf("value of b is=%d \n",b);

	getch();
}