#include<stdio.h>
#include<conio.h>

void main()
{
float pi=3.14, r,area;
clrscr();
printf("Enter radious : ");
scanf("%f",&r);
area=pi*r*r;
printf("\n%f",area);
getch();
}