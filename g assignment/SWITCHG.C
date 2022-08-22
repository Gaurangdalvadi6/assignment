#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	clrscr();
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("press number");
	scanf("%d",&c);

	switch(c)
	{
		case 1:
		{
			d=a+b;
			printf("%d",d);
			break;
		}
		case 2:
		{
			d=a-b;
			printf("%d",d);
			break;
		}
		default:
		{
			printf("enter the valid number");
			break;
		}
	}
	getch();
}