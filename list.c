#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*head=NULL;
struct node* insert(int values)
{
    struct node* curr=head;
    struct node * n=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        n->data=values;
        head=n;
    }
    else
    {
     while(curr->next !=NULL)
     {
         curr=curr->next;
     }
     n->data=values;
     n->next=curr;
     curr->next=n;
     
    }
}
void display()
{
    int i;
    struct node* curr=head;
    
    if(head==NULL)
    {
        printf("\nList underflow...!");
    }
    else
    {
     while(curr->next != NULL)
     {
         printf("%d",curr->data);
         curr=curr->next;
     }
    }
}
void main()
{
    int c,ele;
   
    while(1)
    {
        printf("\nEnter choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                    printf("\nEnter Number of Element:");
                    scanf("%d",&ele);
                   insert(ele);
                   break;
            case 2: 
                   display();
                   break;
        }
    }
}