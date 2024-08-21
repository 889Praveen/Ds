#include<stdio.h>
#include<conio.h>
void main()
{
  int stack[10],top=0,i,ch,ele;
  clrscr();
  while(1)
  {
  printf("Enter Number of choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: push(stack,top)
	    printf("Enter Element:");
	    scanf("%d",&ele);
	    push(stack,top,ele);
	    break;
  }
  }
}
void push(int stack[],int *top,int ele)
{
   if(*top==9)
   {
     printf("s i o");
   }else{
     *top++;
     stack[top]=ele;
   }
}