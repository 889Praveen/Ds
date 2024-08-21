
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
  int no=154,r=0,count=0,s=0,x=0,t;
  x=no,t=no;
  clrscr();
   while(x!=0)
    {
       r=x%10;
       x=x/10;
       count++;

   }
   while(t!=0)
   {
    r=t%10;
    s=s+pow(r,count);
    t=t/10;

}
if(no==s)
{
  printf("\n%d is Armstrong Number",no);
}
else
{
 printf("\n%d is Not Armstrong Number",no) ;
}
   getch();
}
