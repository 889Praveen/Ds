#include<stdio.h>
#include<conio.h>
int push(int stack[4],int top)
{
 int ele;
 if(top==4)
 {
   printf("\nStack is Overflow...!\n");
 }
 else
 {
    printf("\nEnter Number of Element:");
    scanf("%d",&ele);
    top=top+1;
    stack[top]=ele;
 }

 return top;
}
void display(int stack[],int top)
{
  int i;
  if(top==-1)
  {
    printf("\nStack is Empty..!\n");
  }
  else
  {
   printf("\nStack:");
   for(i=0;i<=top;i++)
   {
     printf(" %d ",stack[i]);
   }
  }
}
int pop(int top,int stack[])
{
int count=0;
 if(top==-1)
 {
   printf("\nStack is Empty..!\n");
 }
 else
 {

  printf("\nRemove Element:%d\n",stack[top]);
  top=top-1;
  count++;
 }
 if(count==1)
 {
  printf("\nRemove Element SuccessFull..\n");
 }
 return top;
}
void peep(int stack[],int top)
{
  if(top==-1)
  {
   printf("\nIn Stack Not a Element..!\n");
  }
  else
  {
    printf("\nPeep Element:%d",stack[top]);
  }
}
void modify(int top,int stack[])
{
 int ele,i,New,count=0;
 if(top==-1)
 {
  printf("\nStack is Empty..!\n");
 }
 else
 {
  printf("\nEnter Modify Element:");
  scanf("%d",&ele);
  for(i=0;i<=top;i++)
  {
    if(stack[i]==ele)
    {
     printf("\nEnter New Element:");
     scanf("%d",&New);
     stack[i]=New;
     count++;
     break;
    }
  }
  if(count==1)
  {
   printf("\nUpdate Element SuccessFull..\n");
  }
 }
}
void main()
{
 int stack[5];
 int top=-1,ch;
 clrscr();
 while(1)
 {
  printf("\nEnter One For Push...");
  printf("\nEnter Two For Pop...");
  printf("\nEnter Three For Peep...");
  printf("\nEnter Four For Modify...");
  printf("\nEnter Five For Display...");
  printf("\nEnter Number of choice:");
  scanf("%d",&ch);
  switch(ch)
  {

    case 1:
	      top=push(stack,top);
	      display(stack,top);
	      break;

   case 5:
	     display(stack,top);
	     break;
   case 2:
	     top=pop(top,stack);
	     display(stack,top);
	     break;
   case 3:
	     peep(stack,top);
	     break;
   case 4:
	     modify(top,stack);
	     break;
   default:
	      exit(0);
	      break;
  }
 }
}



