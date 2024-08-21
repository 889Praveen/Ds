#define max 5
void insert(int q[],int *f,int *r)
{
int ele;
 if(*r==max-1 && *f==0||*r==*f-1)
 {
   printf("queue is full..");
 }
 else
 {
  printf("Enter Element:");
  scanf("%d",&ele);
  if(*r==-1&& *f==-1)
  {
  *r+=1;
  q[*r]=ele;
  if(*r==0)
     *f=0;
  }
 else
 {
  if(*r==max-1&&*f!=0)
  {
  *r=0;
  q[*r]=ele;
  }
  else
  {
  *r+=1;
  q[*r]=ele;
  }
  }
 }
}

void remove(int q[],int *f,int *r)
{
 if(*f==-1)
 {
  printf("\nQueue is empty.");
 }
 else
 {
  printf("\nremov element: %d\n",q[*f]);
  q[*f]=0;
     if(*f==*r)
    {
    *f=-1,*r=-1;
    }
    else if(*f==max-1&& *r<*f)
    {
      *f=0;
    }
    else
    {
     *f+=1;
    }
 }
}
void display(int q[],int *f,int *r)
{
int i;
  for(i=0;i<=4;i++)
  {
   printf(" %d",q[i]);
  }
}
void main()
{
  int q[max];
  int f1=-1,r1=-1;
  int *f=&f1,*r=&r1,c;
  clrscr();
  for(c=0;c<max;c++)
  {
   q[c]=0;
  }
  while(1)
  {
    printf("\n1.insert");
    printf("\n2.remove");
    printf("\n3.exit");
    printf("\nenter choice:");
    scanf("%d",&c);
    switch(c)
    {
      case 1:insert(q,f,r);
	 display(q,f,r);
      break;

	case 2:remove(q,f,r);
	  display(q,f,r);
	  break;
      case 3:exit(0);
    }
  }
}