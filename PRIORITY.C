void insert(int q[],int *r,int *f,char c[],int ele)
{
  if(*r==4)
  {
   printf("%s queue is full",c);
  }
  else
  {
   *r+=1;
   q[*r]=ele;
   if(*r==0)
   {
    *f=0;
   }
//   printf("huguugjkb");
  }
}
void pop(int q[],int *r,int *f,char c[])
{
  if(*f==-1)
  {
   printf("%s queue is empty",c);
  }
  else
  {
   printf("%d",q[*f]);
   if(*r==*f)
   {
    *f=-1,*r=-1;
   }
   *f+=1;
  }
}
void display(int cq[],int rq[],int *cr,int *rr,int *cf,int *rf)
{
int i;
printf("\n\nCitizen");
 for(i=*cf;i<=*cr&&i!=-1;i++)
 {
 printf("\n%d ",cq[i]);
 }
 printf("\n\nRegular");
 for(i=*rf;i<=*rr&&i!=-1;i++)
 {
 printf("\n%d ",rq[i]);
 }
}
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
      case 1:if(*cr==4&&*rr==4)
      {
       printf("\nBoth Queue is full");
      }
      else
      {
	printf("\nEnter new age:");
	scanf("%d",&temp);
	if(temp>60)
	{
	insert(cq,cr,cf,"Cinizen",temp);

	}
	else
	{
	insert(rq,rr,rf,"Regular",temp);
	}
      }
       display(cq,rq,cr,rr,cf,rf);
       break;
      case 2:if(*cf==-1&&*rf==-1)
	      {
	      printf("\nboth queue is empty");
	      }
	      else
	      {
	       if(*cr==-1)
	       {
	       pop(rq,rr,rf,"Regular");
	       }
	       else
	       {
	       pop(cq,cr,cf,"Citizen");
	       }
	      }
	      display(cq,rq,cr,rr,cf,rf);
	      break;
      case 3:exit(0);
      }
    }
    getch();
}


