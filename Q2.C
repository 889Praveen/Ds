void push(int a[],int *r,int *f,int ele,char b[])
{
 if(*r==4)
 {
  printf("Quese is full %s ...!",b);
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
void remove(int q[],int *f,int *r)
{
      if(*f==-1)
	 {
	  printf("\nCitigen Queue is Empty ");
	 }
	 else
	 {
	 printf("Remove Element:%d",q[*f]);
	 if(*f==*r)
	 {
	  *f=-1;
	  *r=-1;
	 }
	 *f+=1;
	 }
}
void main()
{
 int q1[5],q2[5];
 int r1=-1,r2=-1,f1=-1,f2=-1;
 int *rr1=&r1,*ff1=&f1,*rr2=&r2,*ff2=&f2;
 int ch,ele;
 clrscr();
 while(1)
 {
 printf("\nEnter one for push");
 printf("\nEnter two for exit");
 printf("\nEnter three for Remove");

 printf("\nEnter Your Choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:if(*rr1==4 && *rr2==4)
	  {
	   printf("\nBoth Queue is Full..!");
	  }
	  else
	  {
	   printf("\nEnter New Element:");
	   scanf("%d",&ele);

	   if(ele<=60)
	   {
	    push(q1,rr1,ff1,ele,"Citigen");
	   }
	   else if(ele>60)
	   {
	     push(q2,rr2,ff2,ele,"Reguler");
	   }
	  }
	    dis(q1,rr1,ff1,"Citigen");
	    dis(q2,rr2,ff2,"Reguler");
	  break;

   case 2:
	  exit(0);
	  break;

   case 3:
	  if(*ff2!=-1)
	    {
	     remove(q2,ff2,rr2);
	     }
	     else
	     {
	      remove(q1,ff1,rr1);
	     }
	     dis(q1,rr1,ff1,"Citigen");
	    dis(q2,rr2,ff2,"Reguler");
	  break;
  }
 }
 getch();
}














