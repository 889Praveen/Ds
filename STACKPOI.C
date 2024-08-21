#include<stdio.h>
#include<conio.h>
struct stack
{
 int i;
 struct stack *next;
};
struct stack *s=NULL, *top=NULL;
void push()
{
  int ele;
  struct stack *node=(struct stack*)malloc(sizeof(struct stack*));
  node->i=ele;
  node->next=NULL;
  if(s==NULL)
  {
   s=node;
   top=node;
  }
  else
  {
   top->next=node;
   top=node;
  }
}