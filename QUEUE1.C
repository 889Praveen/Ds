void insert(int queue[],int *f,int *r)
{
 int ele;
 if(*r==9)
  printf("\nQueue is full");
 else {
  printf("\nEnter element");
  scanf("%d",&ele);
  *r+=1;
  queue[*r]=ele;
  if(*r==0)
    *f=0;
 }
}
void remove(int queue[],int *f,int *r)
{
 if(*f==-1 || *f>*r)
 {
   printf("\nQueue is empty");
   *f=-1;
   *r=-1;
 }
 else
 {
   printf(" Remove Element : %d ",queue[*f]);
   *f+=1;
 }
}
void display(int queue[],int *f,int *r)
{
 int i;
 printf("\n");
 if(*f!=-1)
 {
  for(i=*f;i<=*r;i++)
  {
   printf(" %d ",queue[i]);
  }
 }
 else
   printf("\nQueue is empty");
}
void main()
{
 int queue[10],f1=-1,r1=-1,choice;
 int *f=&f1,*r=&r1;
 clrscr();
  printf("\n1.insert");
  printf("\n2.remove");
  printf("\n3.display");
  printf("\nEnter Your Choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:insert(queue,f,r);
	  break;
   case 2:remove(queue,f,r);
	  break;
   case 3:display(queue,f,r);
	  break;
  }
 }while(choice==1 || choice==2 || choice==3);
}