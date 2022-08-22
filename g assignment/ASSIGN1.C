#include<stdio.h>
#include<conio.h>

void main(){
char name[18],address[50];
int dob,age;
clrscr();
printf("enter your name \n");
scanf("%s",&name);
printf("enter your birth date \n");
scanf("%d",&dob);
printf("enter your age \n");
scanf("%d",&age);
printf("enter your address \n");
scanf("%s",&address);
printf("my name is : %s \n",name);
printf("my birth date is : %d \n",dob);
printf("my age is : %d \n",age);
printf("my address is : %s \n",address);
getch();
}