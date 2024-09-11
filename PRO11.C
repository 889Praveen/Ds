#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};


struct node* insert(struct node *head,int ele)
{
	struct node *n,*prev,*curr;

	n=(struct node*)malloc(sizeof(struct node));

	n->data=ele;
	prev=NULL;
	curr=head;

	if(head==NULL)
	{

		n->next=NULL;
		head=n;

	}
	else
	{

		while( curr!=NULL && ele>curr->data)
		{
			prev=curr;
			curr=curr->next;
		}


		if(head==curr)
		{
		 n->next=head;
		 head=n;
		}

		else
		{

			prev->next=n;
			n->next=curr;
		}
	}

  return head;
}

struct node* del(struct node *head,int ele)
{
	struct node *prev,*curr;

	prev=NULL;
	curr=head;


	   while(curr!=NULL && ele>curr->data)
	   {
		   prev=curr;
		   curr=curr->next;
	   }
	   if(head==curr)
	   {
		   head=curr->next;
		   free(curr);
	   }
	   else
	   {
		   prev->next=curr->next;
		   free(curr);
	   }
	return head;
}

int modify(struct node *head,int old,int newEl)
{
    struct node *curr;
    int i;
    curr=head;
   while(curr!=NULL && old!=curr->data)
   {
      curr=curr->next;
   }
   if(curr->data==old)
   {
    curr->data=newEl;
     i=1;
   }
   else
   {
   i=0;
   }
   return i;
}
void display(struct node *head)
{
	struct node *temp;
	temp=head;
	if(temp==NULL)
	{
	 printf("LInklist is Empty..!");
	}
	else
	{
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	}
}
void main()
{
	struct node *head=NULL;
	int data,c,newEl,old;

	while(1)
	{
		printf("\nEnter One For Insert..");
		printf("\nEnter Two For Delete..");
		printf("\nEnter Three For Modify..");
		printf("\nEnter Four For Display..");
		printf("\nEnter Five For Exit..");
		printf("\nEnter Chioce:");
		scanf("%d",&c);
		switch(c)
		{
		case 1:printf("\nEnter Element:");
			   scanf("%d",&data);
			   head=insert(head,data);
			   display(head);
			   break;
		case 2:printf("\nEnter Element For Delete:");
			   scanf("%d",&data);
			   head=del(head,data);
			   display(head);
			   break;
		case 3:printf("\nEnter Update Element:");
		       scanf("%d",&old);
		       printf("\n Enter new Element:");
		       canf("%d",&newEl);
		       if(modify(head,old,newEl))
			 {
			  printf("%d is Replace by %d ",old,newEl);
			 }
		       else
			 {
			  printf("Value is Not Available in Linklist");
			 }
		       printf("\n");
		       display(head);
		       break;
	case 4:display(head);
	       break;
	case 5:exit(0);
		}
	}

	getch();
}