#include<stdio.h>
#include<conio.h>
int stack[5],t=0,*top=&t;
void push()
{
  int ele;
  if(*top==5)
  {
    printf("\n<====Stack is overflow..!:====>\n");
  }else{
    printf("\nEnter Number of Element:");
    scanf("%d",&ele);
    stack[*top]=ele;
    *top+=1;

  }
}
void disp()
{
  int i;
  for(i=0;i<*top;i++)
   {
      printf("%d \n",stack[i]);
   }
}
void pop()
{
   if(*top==0)
   {
    printf("\n<===Stack is underflow..!===>\n");
   }else{
   printf("\n<===Top Element is Deleted: %d",*top);
  *top-=1;
  }
}

void main()
{
  int ch;

  clrscr();
  while(1)
  {
  printf("\nEnter 1 for push::\n");
  printf("Enter 2 for display::\n");
  printf("Enter 3 for exit:\n");
  printf("Enter 4 for pop:\n");
  printf("Enter your Choice::");
  scanf("%d",&ch);
  switch(ch)
   {
   case 1:
	   push();
	   break;
  case 2:
	  disp();
	  break;
  case 3:
	   exit(0);
	   break;
  case 4:
	   pop();
	   break;

  }
 }
}
































