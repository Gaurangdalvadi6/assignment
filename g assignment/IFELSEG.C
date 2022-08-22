#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf(" enter the value of a=");
	scanf("%d",&a);
	printf(" enter the value of b=");
	scanf("%d",&b);
	printf(" enter the value of c=");
	scanf("%d",&c);

	if(a>b)
	{
		printf("a is max");
	}
	else if(b>c)
	{
		printf("b is max");
	}
	else
	{
		printf("c is max");
	}
	getch();
}