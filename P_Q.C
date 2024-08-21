/*void insert(int q1[],int q2[],int *r1,int *r2,int *f1,int *f2)
{
  int ele;
  printf("\nEnter Elemennt in Queue:");
  scanf("%d",&ele);
  if(ele>=60)
  {
   if(*r1==-1 && *f1==-1)
    {
     *f1=0;
     *r1=0;
     q1[*r1]=ele;
    }
    else if(*r1==5)
    {
     printf("Queue1 is full");
    }
     else
     {
      q1[*r1]=ele;
      *r1+=1;
     }
  }
  else if(ele<60)
  {
   if(*f2==-1&& *r2==-1)
    {
     *f2=0;
     *r2=0;
     q2[*r2]=ele;
    }
   else if(*r2!=5)
    {
      q2[*r2]=ele;
      *r2+=1;
    }
   else
     {
      printf("Queue1 is full");
     }
  }
}*/
void ins(int q[],int *f,int *r,char ch[],int ele)
{
  if(*r==4)
  {
   printf("\n %s queue is full",ch);
  }
  else{
   *r+=1;
   q[*r]=ele;
   if(*r==0)
     *f=0;
  }
}
void del(int q[],int *f,int *r,char ch[])
{
  if(*f==-1)
  {
     printf("\n%s queue is empty",ch);
  }
  else
  {
    printf(" %d ",q[*f]);
    if(*f==*r)
    {
     *f=-1;*r=-1;
    }
    else
      *f+=1;
  }
}
void display(int cq[],int rq[],int *cf,int *cr,int *rf,int *rr)
{
 int i;
 printf("\nCitizen Queue \n");
 for(i=*cf;i<=*cr && i!=-1;i++)
 {
   printf(" %d ",cq[i]);
 }
 printf("\nRegular Queue\n");
 for(i=*rf;i<=*rr && i!=-1;i++)
 {
   printf(" %d ",rq[i]);
 }
}
/*
void remove(int q1[],int q2[],int *r1,int *r2,int *f1,int *f2)
{
  if(*r1==-1 && *f1==-1)
  {
  printf("Queue1 is empty..");
  }
  else if(*f1==*r1)
  {
  printf("%d",q1[*f1]);
   *r1=-1;
   *f1=-1;
  }
  else
  {
   printf("\n%d",q1[*f1]);
   *f1+=1;
  }
}*/
void main()
{
  int cq[5],rq[5];
  int f1=-1,f2=-1,r1=-1,r2=-1;
  int *cf=&f1,*cr=&r1,*rf=&f2,*rr=&r2,c,temp;
  clrscr();
  while(1)
  {
    printf("\n1.insert");
    printf("\n2.remove");
    printf("\n3.exit");
    printf("\nenter choice:");
    scanf("%d",&c);
    switch(c)
    {
      case 1:if(*cr==4 && *rr==4)
	       printf("\nboth queue is full");
	     else
	     {
		printf("\nenter new age : ");
		scanf("%d",&temp);
		if(temp>=60)
		   ins(cq,cf,cr,"Citizen",temp);
		else
		   ins(rq,rf,rr,"Regular",temp);
	     }
	     display(cq,rq,cf,cr,rf,rr);
	     break;
      case 2:if(*cf==-1 && *rf==-1)
		 printf("\nboth queue is empty");
	     else
	     {
	       if(*cf==-1)
	       {
	       del(rq,rf,rr,"Regular");
	       }
	       else
	       {
		del(cq,cf,cr,"Citizen");
	       }
	     }
	     display(cq,rq,cf,cr,rf,rr);
	     break;
      case 3:exit(0);
    }
  }
}