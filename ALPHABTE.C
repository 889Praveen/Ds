#include<stdio.h>
void main()
{
 char ch;
 clrscr();
 printf("\nenter a character::");
 scanf("%c",&ch);
 if(ch>='a'&& ch<='z')
 {
 printf("\n enterd charactaer is capital alphabet");
 }
 else if (ch>='a'&& ch<='z')
  {
   printf("\n enterd charactaere is a small 0lphabet");
  }
 else
 {
 printf("\n enterd charactaere is not an alphabet");
 }
 getch();
 }