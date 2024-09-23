#include<stdio.h>
#include<conio.h>
struct node
{
 int item;
 struct node *next;
}*last=NULL;
void node_insert()
{
 int data;
 struct node *new1;

 new1=(struct node *)malloc(sizeof(struct node));
 if(last==NULL)
 {
  printf("\nEnter Element:");
  scanf(" %d ",&data);
  new1->item=data;
  last=new1;
  last->next=last;
 }
 else
 {
  printf("\nEnter Element:");
  scanf(" %d ",&data);
  new1->item=data;
  new1->next=last->next;
  last->next=new1;
  last=new1;
 }
}
void display()
{
  struct node *temp=last->next;
  printf("\nDisplay:");
  do
  {
   printf(" %d ",temp->item);
   temp=temp->next;
  }while(temp!=last->next);
}
void main()
{


  int n;
  clrscr();

  while(1)
  {
   printf("\nchoice:");
   scanf("%d",&n);
   switch(n)
   {
    case 1:
	  node_insert();
	  break;

    case 2:
	  display();
	  break;
    case 3:
    exit(0);
    break;
   }
  }

}