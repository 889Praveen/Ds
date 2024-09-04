#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
	struct node* link;
};
struct node* front = NULL;
struct node* rear = NULL;

void insert();
void firstinsert();
void delet();
void firstdelet();
void display();


void insert()
{
	struct node* temp;

	temp = (struct node*)malloc(sizeof(struct node));

	printf("Enter The Value :- ");
	scanf("%d",&temp->data);
	printf("\n");
	temp->link = NULL;

	if(front==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->link=temp;
		rear=rear->link;
	}

	temp->link = front;

}
void firstinsert()
{
	struct node* tp;

	tp = (struct node*)malloc(sizeof(struct node));

	printf("Enter The Value :- ");
	scanf("%d",&tp->data);
	printf("\n");

	tp->link = NULL;

	if(front==NULL)
	{
	       front = tp;
	       rear = tp;
	       tp->link = front;
	}
	else
	{
		tp->link = front;
		rear->link = tp;
		front = tp;
	}

}
void delet()
{
	struct node* tmp;

	if(front == NULL)
	{
		printf("Linked List Empty \n");
	}
       else if(front==rear)
	{
		tmp=front;
		printf("Deleted value = %d \n\n",tmp->data);
		tmp->link=NULL;
		front=NULL;
		rear=NULL;
		free(tmp);
	}
	else
	{
		tmp=front;
		front=front->link;
		printf("Deleted Value = %d \n\n",tmp->data);
		rear->link=tmp->link;
		tmp->link=NULL;
		free(tmp);
	}

}
void display()
{
	struct node* t;
	if(front==NULL)
	{
		printf("Linked List Empty \n");
	}
	else
	{
		printf("\nDisplay value \n");
		printf("------------- \n");
		t=front;
		do
		{
			printf("%d \n",t->data);
			t=t->link;
		}while(t!=front);
	}
}


void main()
{
	int ch;
	clrscr();

	printf("Circular Linked List \n");
	printf("-------------------- \n");
	printf("1 - Insert \n2 - First Insert \n3 - Delete \n4 - Dispaly\n5 - Exit\n");

	do
	{
		printf("Enter your Choice :- ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			{
				insert();
				break;
			}
			case 2:
			{
				firstinsert();
				break;
			}
			case 3:
			{
				delet();
				break;
			}
			case 4:
			{
				display();
				break;
			}
			case 5:
			{
				printf("Are you sure Exit... \n");
				printf("Enter Any key ... \n");
				break;
			}
			default :
			{
				printf("Enter Valid Option \n");
				printf("1 - Insert \n2 - First Insert \n3 - Delete \n4 - Dispaly\n5 - Exit\n");
			}
		}
	}while(ch!=5);

	getch();

}