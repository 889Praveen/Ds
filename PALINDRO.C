#include<stdio.h>
#include<conio.h>
void main()
{
 int n=1210,temp=n,r,rev=0;
 clrscr();
 while(n>0)
 {
  r=n%10;
  rev=rev*10+r;
  n/=10;
 }
 if(rev==temp)
 printf("No is palindrome ");
 else
 printf("No is not palindrome ");
 getch();
}