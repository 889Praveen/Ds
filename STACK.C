#include<stdio.h>
#include<conio.h>

int push(int top,int stack[])
{
  int ele;
 if(top==5)
 {
  printf("\nStack is Empty..!");
 }
 else
 {
   printf("\nEnter Number of Element:");
   scanf("%d",&ele);
  top=+1;
  stack[top]=ele;
  printf("ele:%d",ele);
  printf("\nstack:%d",stack[top]);

 }
 return top;
}
void dis(int stack[],int top)
{
 int i;
 if(top==0)
 {
  printf("\nstack is underflow...!");
 }else{
 for(i=0;i<top;i++)
 {
  printf("%d",stack[i]);
 }
 }
}
void main()
{
 int stack[5];
 int top,ch;
 clrscr();
 while(1)
 {
 printf("\nEnter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	 push(stack,top);
	 dis(stack,top);
	 break;
  case 2:
	  exit(0);
	  break;

 }
}
 getch();
}
