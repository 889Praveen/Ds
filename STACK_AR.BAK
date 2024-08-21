#include<stdio.h>
#include<conio.h>
int stack[5],top=-1,i;
void push()
{
 if(top>=5)
 {
  printf("Stack is overflow");
 }
 else
 {
  top+=1;
  printf("Enter element : ");
  scanf("%d",&stack[top]);
  printf("\nElement inserted..");
 }
}
void pop()
{
  if(stack[top]<=-1)
  {
   printf("Stack is uderflow");
  }
  else
  {
   printf("\nRemove element is : %d ",stack[top]);
   stack[top]=NULL;
   top-=1;
  }
}
void display()
{
 int i,temp=top;
 for(i=temp;i>=0;i-=1)
 {
  printf("\n%d",stack[temp]);
  temp-=1;
 }
}
void main()
{
 int n;
 clrscr();
 while(1)
 {
 printf("\n1 for push ");
 printf("\n2 for pop ");
 printf("\n3 for display");
 printf("\n4 for exit ");
 printf("\nEnter your choice : ");
 scanf("%d",&n);

 switch(n)
 {
   case 1:
     push();
     break;


   case 2:
     pop();
     break;

   case 3:
     display();
     break;
   case 4:
     exit(0);

   default:
   printf("Enter valid choice...");
 }


 }
  getch();
}