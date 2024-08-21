#include<stdio.h>
#include<conio.h>
struct node
{
 int data;
 struct node *next;
};

struct node *insertLL(struct node *head,int ele)
{
  struct node *t=head;
  struct node *New=(struct node*)malloc(sizeof(struct node*));
  New->data=ele;
  if(head==NULL)
  {
     New->next=NULL;
     head=New;
  }
  else
  {
   while(ele>
   New->next=head;
   head=New;
  }
  return head;
}
struct node *removeLL(struct node *head)
{
  if(head==0)
  {
   printf("\nEmpty Linked List");
  }
  else
  {
   struct node *t=head;
   int rele;
   rele=t->data;
   head=t->next;
   free(t);
   printf("\nRemoved element : %d",rele);
  }
  return head;
}

void display(struct node *head)
{
  struct node *t=head;
 if(head!=0)
 {

  do
  {
   printf("%d ",t->data);
   t=t->next;
  }while(t->next!=0);
  if(t!=0)
    printf("%d",t->data);
  }
  else
  {
  printf("\nLinked list is empty !...");
  }
}
void main()
{
 struct node *head=NULL;
 int ele,ch;
 clrscr();
 while(1)
 {
  printf("\nEnter 1 for insert\n");
  printf("Enter 2 for Display\n");
  printf("\nEnter 3 for remove\n");
  printf("Enter 4 for exit\n");
  scanf("%d",&ch);

  switch(ch)
  {
    case 1:
      printf("Enter element : ");
      scanf("%d",&ele);
      head=insertLL(head,ele);
      break;
    case 2:
      display(head);
      break;
    case 3:
      head=removeLL(head);
      break;
    case 4:
      exit(0);
  }

 }
getch();

}

