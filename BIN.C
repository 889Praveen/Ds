void main()
{
 int no,i=0,j;
 int bin[10];
 clrscr();
 printf("\nenter number");
 scanf("%d",&no);
 while(no>0)
 {
  bin[i]=no%2;
  no=no/2;
  i++;
 }
 for(j=i-1;j>=0;j--)
 {
  printf("%d",bin[j]);
 }
 getch();
}