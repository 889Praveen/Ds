#define max 5
void insert(int q[],int *r,int *f)
{
  if(*r==max-1 && *f==0|| *r==*f-1)
  {
   printf("\nCQueue is Full..!");
  }
  else
  {
   int ele;
   printf("\nEnter new value:");
   scanf("%d",&ele);
   if(*r==-1 && *f==-1)
   {
    *r+=1;
    q[*r]=ele;
    if(*r==0)
    {
      *f=0;
    }
   }
   else
   {
    if(*r==max-1 &&*f!=0)
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

void remove(int q[],int *r,int *f)
{
 if(*f==-1)
 {
  printf("\nCQueue is Empty..!");
 }
 else
 {
  printf("\nRemove Element:%d",q[*f]);
  q[*f]=0;
  if(*r==*f)
  {
   *f=-1,*r=-1;
  }
  else if(*f==max-1 && *r<*f)
  {
   *f=0;
  }
  else
  {
   *f+=1;
  }
 }
}
void dis(int q[])
{
 int i;
 printf("\nCQueue:");
 for(i=0;i<5;i++)
 {
  printf(" %d ",q[i]);
 }
}
void modify(int q[],int *f)
{
  int ele,New,i,count=0;
  if(*f==-1)
  {
   printf("\nCQueue is Empty..!");
  }
  else
  {
    printf("\nEnter Update Element:");
    scanf("%d",&ele);
     for(i=0;i<5;i++)
     {
      if(q[i]==ele)
      {
       printf("\nEnter Update New Element:");
       scanf("%d",&New);
       q[i]=New;
       count++;
       break;
      }
     }
  }
if(count==1)
{
printf("\nUpdate Element SuccessFull..");
}
else
{
 printf("\nEnter Element Not in Queue..!");
}

}
void main()
{
int q[max],r1=-1,f1=-1;
int *r=&r1,*f=&f1,c,a;
 clrscr();
for(a=0;a<max;a++)
 {
  q[a]=0;
 }
 while(1)
 {
   printf("\nEnter One For Insert..");
   printf("\nEnter Two For Remove..");
   printf("\nEnter Three For Modify..");
   printf("\nEnter Four For Display..");
   printf("\nEnter choice:");
   scanf("%d",&c);
   switch(c)
   {
     case 1:insert(q,r,f);
	    dis(q);
	    break;
     case 2:remove(q,r,f);
	    dis(q);
	    break;
     case 3:modify(q,f);
	    break;
     case 4:dis(q);
	    break;
     case 5:exit(0);
	    break;
   }
  }
}