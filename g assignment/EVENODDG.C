/*
	Gaurang Dalvadi
	Even_odd program
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("enter the value of a \n");
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is odd");
	}

	getch();
}