#include<stdio.h>
#include<conio.h>
void main()
{
 int q[5],q1[5],ch;
 int r=-1;
 int r1=-1,ele;
 clrscr();
 printf("\nEnter Your Choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	   printf("Enter Number of Element:");
	   scanf("%d",&ele);
	   if(60>ele)
	   {
	    push(q[],r,ele);
	   }
	   else if(60<=ele)
	   {
	       push(q1[],r1,ele);
	   }
  }
 }

void push(int ch[],int *r,int ele)
{
  if(ch[]>=60)
  {
  *r=*r+1;
  ch[*r]=*r;
  }
  else if(ch[]<60)
  {
    *r=*r+1;
    ch[*r]=*r;
  }

}