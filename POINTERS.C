#include<stdio.h>
#include<conio.h>

struct stack_pack
{
 int i;
 struct stack_pack *next;
};
struct stack_pack *top=NULL;
struct stack_pack* push(struct stack_pack *stack)
{
  int value;
  struct stack_pack *temp =(struct stack_pack*)malloc(sizeof(struct stack_pack));
  printf("enter element");
   scanf("%d",&value);
  if(stack==NULL)
  {
    stack=temp;
    stack->i=value;
    stack->next=NULL;
    top=stack;
  }
  else
  {
   top->next=temp;
   top=temp;
   top->i=value;
   top->next=NULL;
   temp=stack;

  }
  return stack;
}
/*struct stack_pack* pop(struct stack_pack *stack,struct stack_pack *top)
{
  struct stack_pack *temp=stack;
  struct stack_pack *pre=NULL;
  if(stack==NULL || stack->next==NULL)
  {
   stack=NULL;
   printf("\nstack is underflow\n");
  }
  else
  {
    while(temp->next!=NULL)
  {
    pre=temp;
    temp=temp->next;
  }
  if(stack==pre)
  {
   stack=NULL;
    top=pre;
  }
  else
  {
  pre->next=NULL;
  top=pre;
  }
  }
  return stack;

} */
void display(struct stack_pack *stack)
{

 struct stack_pack *temp=stack;
 printf("Value ::: \n");
 while(temp!=NULL)
 {
  printf("%d  ",temp->i);
  temp=temp->next;
 }
 printf("\n\n");
}
void main()
{
 struct stack_pack *stack=NULL;
 int choice;
 clrscr();
 while(1)
 {
  printf("\n1.push");
  printf("\n2.pop");
  printf("\n3.display");
  printf("\n4.exit");
  printf("\nenter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:stack=push(stack);
	  break;
   case 2://pop(stack,top);
	 break;
   case 3:display(stack);
	  break;
   case 4:exit(0);
  }
 }
 getch();
}