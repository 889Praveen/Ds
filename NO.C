#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nenter value a =");
	scanf("%d",&a);
	printf("\nenter value b =");
	scanf("%d",&b);

	if(a>b)
	{
	    printf("\na is greater than b");
	}
	else
	{
	   printf("\na is less than b");
	}
	getch();
}

