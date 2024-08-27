int r=-1,f=-1,q[10],i;
void insert()
{
 if(r==9)
 {
  printf("Queue is overflow..!\n");
 }else
 {
  r=r+1;
 printf("Enter Number of Element =:");
 scanf("%d",&q[r]);
 }
}
void main()
{
 int ch;
 clrscr();
 while(1)
 {
 printf("Enter Number of Choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	 insert();
	 break;
  case 2:
	 remove();
	 break;
  case 3:
	 exit(0);
	 break;
  case 4:
	 dis();
	 break;
  }
 }
 getch();
}