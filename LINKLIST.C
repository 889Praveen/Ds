#include<stdio.h>
#include<conio.h>
struct node
{
   struct node *next;
   int item;
};
struct node* insert(struct node *head)
{
  struct node *new1;
  int data;
  new1=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter Insert ele:");
  scanf("%d",&data);
  if(head==NULL)
  {
    head=new1;
    new1->item=data;
    new1->next=NULL;
  }
  else
  {
    new1->item=data;
    new1->next=head;
    head=new1;
  }
  return head;
}
void dis(struct node *head)
{
  int i;
  struct node *temp;
  temp=head;
 if(temp==NULL)
 {
  printf("\nLinkList is Empty..!");
 }
 else
 {
   printf("\nLinklist:");
   while(temp!=NULL)
    {
     printf(" %d ",temp->item);
     temp=temp->next;
    }

 }
}
struct node* remo(struct node *head)
{
 struct node *temp;
 temp=head;
 if(head==NULL)
 {
   printf("\nLinkList is Empty...!");
 }
 else
 {
   head=head->next;
   free(temp);
 }
 return head;

}
void main()
{
  int ch;
  struct node *head=NULL;
  clrscr();

  while(1)
  {
  printf("\nEnter 1 for insert..");
  printf("\nEnter 2 for Exit..");
  printf("\nEnter 3 for Display..");
  printf("\nEnter 4 for Remove..");
  printf("\nEnter choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	 head=insert(head);
	  break;
   case 2:
	  exit(0);
	  break;
   case 3:
	  dis(head);
	  break;
   case 4:
	 head=remo(head);
	  dis(head);
	  break;

  }
}
}