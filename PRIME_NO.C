void main()
{
int no,i,j;
clrscr();
printf("\nenter term:");
scanf("%d",&no);
 for(i=1;i<=no;i++)
 {
   for(j=2;j<no;j++)
   {
     if(i%j==0)
     {
       break;
     }
   }
   if(i==j)
   {
   printf("%d ",i);
   }
 }
 getch();
}