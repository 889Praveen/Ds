#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *left,*right;
int data;
};
struct node* insert(struct node *root,int data)
{
  struct node *new1=(struct node*)malloc(sizeof(struct node));
  struct node *curr=root,*prev=NULL;

  new1->data=data;
  new1->left=NULL;
  new1->right=NULL;

  while(curr != NULL)
  {
    prev=curr;
    if(data>root->data)
     {
       curr=curr->right;
     }
    else
     {
      curr=curr->left;
     }
  }
  if(prev==NULL)
   {
    root=new1;
   }
   else
   {
    if(prev->data>data)
      {
	prev->left=new1;
      }
    else
      {
       prev->right=new1;
      }
  }
return root;
}

void postorder(struct node *root)
  {
   if(root!=NULL)
    {
     postorder(root->left);
     postorder(root->right);
     printf(" %d ",root->data);
    }
  }
void inorder(struct node *root)
 {
  if(root!=NULL)
   {
    inorder(root->left);
    printf(" %d ",root->data);
    inorder(root->right);
   }
 }
void preorder(struct node *root)
 {
  if(root!=NULL)
   {
    printf(" %d ",root->data);
    preorder(root->left);
    preorder(root->right);
   }
 }
void main()
 {
  struct node *root=NULL;
  int value,choice;
  clrscr();
  while(1)
  {
   printf("\n1.insert");
   printf("\n2.inorder");
   printf("\n3.postorder");
   printf("\n4.preorder");
   printf("\n5.exit");
   printf("\nEnter choice:");
   scanf("%d",&choice);
   switch(choice)
    {
     case 1:
	    printf("\nEnter Element: ");
	    scanf("%d",&value);
	    root=insert(root,value);
	    break;
    case 2:
	   inorder(root);
	   break;
     case 3:
	   postorder(root);
	   break;
    case 4:
	   preorder(root);
	   break;
    case 5:
	   exit(0);

   default:printf("\nEnter valid choice...!");
  }
 }
}