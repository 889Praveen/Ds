#include<stdio.h>
#include<conio.h>
void main()
{
  int n=25,i=2,j,x=1,c=0;
  clrscr();
  while(x<=n	+1)
  {
    for(j=1;j<=i;j+=1)
    {
     if(i%j==0)
     {
     c+=1;
     }
    }
    if(c==2)
    {
    printf("%d\n",i);
    x+=1;
    }
    i+=1;
    c=0;
  }
  getch();

	}