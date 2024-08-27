#include<stdio.h>
#include<conio.h>
void ins(int a[],int *r,int *f)
{
   int ele;
  if((*r==4 && *f==0 )|| *f==-1 && *r==4)
  {
   printf("\nC Queue is Full..!");
  }
  else
  {
    printf("\nEnter Number of Element:");
    scanf("%d",&ele);
    *r+=1;
    a[*r]=ele;
    if(*r==0 && *f==-1)
    {
      *f=0;
    }
  }
}
void dis(int q[],int *r,int *f)
{
 int i;
 if(*f==-1)
 {
  printf("C Queue is Empty..!");
 }
 else
 {
 printf("Cqueue:");

   if(*r>*f)
  {
   for(i=*f;i<=*r;i++)
   {
     printf(" %d ",q[i]);
   }
  }
  else
  {
    for(i=*f;i<5;i++)
    {
      printf(" %d ",q[i]);
    }
    for(i=0;i<=*r;i++)
    {
      printf(" %d ",q[i]);
    }
  }
 }
}
void re(int *r,int *f)
{
   if((*r==-1 && *f==-1)|| *r==-1)
   {
     printf("\CQueue is underflow...!");
   }
   else
   {
    *f=+1;
   }
}
void main()
{
  int q1[5];
  int ch,rr=-1,ff=-1;
  int *r=&rr;
  int *f=&ff;
  clrscr();
  while(1)
  {
  printf("\nEnter 1 Insert..");
  printf("\nEnter 2 Exit..");
  printf("\nEnter 3 Display...");
  printf("\nEnter 4 Remove..");
  printf("\nEnter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	  ins(q1,r,f);
	//  dis(q1,r,f);
	  break;
  case 2:
	  exit(0);
	  break;
  case 3:
	  dis(q1,r,f);
	  break;
  case 4:
	 re(r,f);
	 break;
  }
  getch();
  }
}

