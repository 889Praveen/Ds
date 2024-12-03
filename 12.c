#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*pre;
};

struct node *insert(struct node *head)
{
  struct node *c,*n,*p;
  int ele;
  n=(struct node *)malloc(sizeof(struct node));
  c=head;
  p=NULL;
  printf("Enter element:");
  scanf("%d",&ele);
  n->data=ele;
  if(head==NULL)
  {
    n->next=n;
    n->pre=n;
    head=n;
  }
  else
  {
    while(c!=head)
    {
        p=c;
        c=c->next;
    }
    p->next=n;
    n->pre=p;
    n->next=c;
    c->pre=n;
  }
return head;
}
void display(struct node *head)
{
    struct node *temp=head->next;
    printf("%d",head->data);
    while(temp!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    struct node *head=NULL;
    int ele,c;
    while(1)
    {
        printf("\n 1:insert");
		printf("\n 2:Delete");
		printf("\n 3:modify");
        printf("\n 4:display");
        printf("\n 5:exit");
		printf("\n Enter your chioce");
		scanf("%d",&c);
		switch(c)
		{ 
             case 1:head=insert(head);
             display(head);
             break;

             case 5:break;
        }
    }
}