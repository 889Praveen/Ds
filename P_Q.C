#include<stdio.h>
#include<conio.h>
void in(int q[],int *rr1,int *ff1,int ele,char a[])
{
   if(*rr1==4 && *ff1==0)
   {
     printf("\n%s Queue is  Full..!",a);
   }
   else
   {
     *rr1+=1;
     q[*rr1]=ele;

   if(*rr1==0)
   {
     *ff1=0;
   }
   }
}
void dis(int q[],int *rr1,int *ff1,char a[])
{
  int i;

 if(*ff1==-1 && *rr1==-1 )
 {
  printf("\n%s Queue is underflow..!",a);
 }
 else
 {
  printf("\n%s Queue:",a);
  for(i=*ff1;i<=*rr1;i++)
  {
   printf(" %d ",q[i]);
  }
 }
}
void re(int *rr1,int *ff1,char a[])
{
  if(*rr1==-1 && *ff1==-1 )
  {
   printf("%s Queue is Empty..!",a);
  }
  else
  {
   *ff1+=1;
  // q[*ff1]=*ff1;
  }
}
void main()
{
 int q1[5],q2[5];
 int r1=-1,f1=-1,r2=-1,f2=-1;
 int *rr1=&r1,*ff1=&f1,*rr2=&r2,*ff2=&f2;
 int ch,ele;
 clrscr();
 while(1)
 {
  printf("\nEnter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	   if(*rr1==4 && *rr2==4)
	   {
	     printf("\nBhoth Queue are Full...!");
	   }
	   else
	   {
	     printf("\nEnter Number of Element:");
	     scanf("%d",&ele);
	     if(ele>60)
	     {
		in(q1,rr1,ff1,ele,"Citigen");
		dis(q1,rr1,ff1,"Citigen");
	     }
	     else
	     {
		in(q2,rr2,ff2,ele,"Regular");
		dis(q2,rr2,ff2,"Regular");
	     }
	     break;
   case 2:
	    exit(0);
	    break;
   case 3:  if(*ff1==-1)
	    {
	     re(rr1,ff1,"Citigen");
	     dis(q1,rr1,ff1,"Citigen");
	    }
	    else
	    {
	     re(rr2,ff2,"Regular");
	     dis(q2,rr2,ff2,"Regular");
	    }
	   break;
	   }
  }
 }
}