void insert(int a[],int *r,int *f,int ele,char b[])
{
 if(*r==4)
 {
  printf("\n%s Quese is full...!",b);
 }
 else
 {
   *r+=1;
   a[*r]=ele;
   if(*r==0)
   {
     *f=0;
   }
 }
}
void dis(int d[],int *r,int *f,char pp[])
{
  int i;
  printf("\n %s Queue:\n",pp);
  for(i=*f;i<=*r && *r!=-1;i++)
  {
   printf(" %d",d[i]);
  }
}
void remove(int q[],int *f,int *r,char c[])
{
      if(*f==-1)
	 {
	  printf("\n%s Queue is Empty..!",c);
	 }
	 else
	 {
	 printf("Remove Element: %d",q[*f]);
	 if(*f==*r)
	 {
	  *f=-1;
	  *r=-1;
	 }
	 else
	 {
	  *f+=1;
	 }
	 }
}
void modify(int q[],char c[],int ele,int *r,int *f)
{
 int i;
 int New;
  if(*f==-1)
  {
   printf("\n%s Queue is Empty..!",c);
  }
  else
  {
     for(i=*f;i<*r;i++)
     {
      if(q[i]==ele)
      {
       printf("\nEnter New Element:");
       scanf("%d",&New);
       q[i]=New;
       break;
      }
     }
  }
}
void main()
{

 int q1[5],q2[5];
 int r1=-1,r2=-1,f1=-1,f2=-1;
 int *rr1=&r1,*ff1=&f1,*rr2=&r2,*ff2=&f2;
 int ch,ele,e;
 clrscr();
 while(1)
 {
 printf("\nEnter One For insert..");
 printf("\nEnter Two For Delete..");
 printf("\nEnter Three For Modify..");
 printf("\nEnter Four For Display..");

 printf("\nEnter Your Choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:if(*rr1==4 && *rr2==4 )
	  {
	   printf("\nBoth Queue is Full..!");
	  }
	  else
	  {
	   printf("\nEnter Number of Element:");
	   scanf("%d",&ele);

	   if(ele<=60)
	   {
	    insert(q1,rr1,ff1,ele,"Citigen");
	   }
	   else if(ele>60)
	   {
	     insert(q2,rr2,ff2,ele,"Reguler");
	   }
	  }
	    dis(q1,rr1,ff1,"Citigen");
	    dis(q2,rr2,ff2,"Reguler");
	  break;

   default:
	   exit(0);
	   break;

   case 2:
	  if(*ff2!=-1)
	    {
	     remove(q2,ff2,rr2,"Reguler");
	     }
	     else
	     {
	      if(*ff1!=-1)
	      {
	       remove(q1,ff1,rr1,"Citigen");
	      }
	      else
	      {
	       printf("\nBhoth Queue is Empty..!");
	      }
	    }
	     dis(q1,rr1,ff1,"Citigen");
	    dis(q2,rr2,ff2,"Reguler");
	  break;
   case 3:
	   printf("\nEnter Modify Element:");
	   scanf("%d",&e);
	   if(e<=60)
	   {
	    modify(q1,"Citigen",e,rr1,ff1);
	   }
	   else
	   {
	    if(e>60)
	    {
	     modify(q2,"Reguler",e,rr2,ff2);
	    }
	    else
	    {
	     printf("\nElement is Not Faund...!");
	    }
	   }
	   break;
   case 4:
	    dis(q1,rr1,ff1,"Citigen");
	    dis(q2,rr2,ff2,"Reguler");
	    break;
  }
 }

}

















