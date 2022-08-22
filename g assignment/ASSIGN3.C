#include<stdio.h>
#include<conio.h>

void main()
{
  float PI=3.14;
  int r=3;
  int base=2;
  float height=2.3;
  int length=10,width=20,circle,rectangle,triangle;
  clrscr();

  printf("area of circle: ");
  circle=PI*r*r;
  printf("%d \n",circle );

  printf("area of rectangle: ");
  rectangle=length*width;
  printf("%d \n",rectangle);

  printf("area of triangle: ");
  triangle=0.5*base*height;
  printf("%d \n",triangle);
  getch();
  }
