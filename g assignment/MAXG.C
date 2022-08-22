#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is max");
	}
	else
	{
		printf("b is max");
	}
	getch();
}
