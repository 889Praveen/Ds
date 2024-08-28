void insert(int queue[],int *f,int *r)
{
 int ele;
 if(*r==4)
  printf("\nQueue is full..!");
 else {
  printf("\nEnter Element:");
  scanf("%d",&ele);
  *r+=1;
  queue[*r]=ele;
  if(*r==0)
  {
    *f=0;
  }
 }
}
void remove(int queue[],int *f,int *r)
{
 if(*f==-1 || *f>*r)
 {
   printf("\nQueue is Empty..!");
   *f=-1;
   *r=-1;
 }
 else
 {
   printf("\nRemove Element : %d ",queue[*f]);
   *f+=1;
 }
}
void display(int queue[],int *f,int *r)
{
 int i;
 printf("\n");
 if(*f!=-1)
 {
  printf("Queue:");
  for(i=*f;i<=*r;i++)
  {
   printf(" %d ",queue[i]);
  }
 }
 else
   printf("\nQueue is Empty..!");
}
void modify(int q[],int *r,int *f)
{
  int ele,New,i;
 if(*f!=-1)
 {
  printf("\nEnter Update Element:");
  scanf("%d",&ele);
   for(i=*f;i<=*r;i++)
   {
    if(q[i]==ele)
    {
     printf("\n Enter New Element:");
     scanf("%d",&New);
     q[i]=New;
     break;
    }
   }
 }
 else
 {
  printf("\nQueue is Empty..!");
 }
}
void main()
{
 int queue[5],f1=-1,r1=-1,choice;
 int *f=&f1,*r=&r1;
 clrscr();
 do
 {
  printf("\n1.Insert..");
  printf("\n2.Remove..");
  printf("\n3.Modify..");
  printf("\n4.Display..");
  printf("\nEnter Your Choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:insert(queue,f,r);
	  break;
   case 2:remove(queue,f,r);
	  break;
   case 3:display(queue,f,r);
	  break;
   case 4:modify(queue,r,f);
	  break;
  }
 }while(choice==1 || choice==2 || choice==3 || choice==4);
}
