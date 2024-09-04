#include<stdio.h>
#include<conio.h>
void insert(int q[],int *r1,int *f1)
{
   int ele;
   if(*r1==4)
   {
    printf("\nQueue is full...!");
   }
   else
   {
    printf("\nEnter Number of Element:");
    scanf("%d",&ele);

    *r1+=1;
    q[*r1]=ele;
    if(*r1==0)
    {
     *f1=0;
    }
   }
}
void dis(int q[],int *r1,int *f1)
{
 int i;
 printf("\nQueue:");
 for(i=*f1;i<=*r1;i++)
 {
   printf(" %d ",q[i]);
 }
}
void re(int q[],int *r1,int *f1)
{
  if(*r1==0 || *f1==4)
  {
    printf("\nQueue is Empty..!");
  }
  else
  {

    printf("\nRemove Element:%d",q[*f1]);
   *f1+=1;
  }
}
void main()
{
  int q[5],f=-1,r=-1;
  int *r1=&f;
  int *f1=&r;
  int ch;
  clrscr();
  while(1)
  {
   printf("\nEnter 1 For insert");
   printf("\nEnter 2 display");
   printf("\nEnter 3 remove");
   printf("\nEnter 4 exit");
   printf("\nEnter your choice:");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
	    insert(q,r1,f1);
	    dis(q,r1,f1);
	    break;
    case 2:
	    dis(q,r1,f1);
	    break;
    case 3:
	    re(q,r1,f1);
	    break;

   case 4: exit(0);
	   break;
   }
  }
}
