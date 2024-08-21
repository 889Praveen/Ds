#include<stdio.h>
#include<conio.h>
char ch[10], stack[10];
int top=0;
void push(char ch)
{
  stack[top]=ch;
  top+=1;
}
void pop()
{
 printf("%c",&stack[top]);
 stack[top]=NULL;
 top-=1;
}
int prec(char ch)
{
 int p;
 if(ch=='+'||ch=='-')
 {
  p=1;
 }
 else{
  if(ch=='*'|| ch=='/')
  {
   p=2;
  }
 }
 return p;
}
void main()
{
int i=0;
 printf("Enter infix : ");
 scanf("%s",&ch);
 while(1)
 {
 if(ch[i]>='a' && ch[i]<='z')
 {
  printf("%c",ch[i]);
 }
 else{
  if(ch[i]=='+' || ch[i]=='-')
  {
   if(stack[i]==NULL)
   {
    push(ch[i]);
   }
   else{
    if(prec(stack[top])>=prec(ch[i]))
    {
     push(ch[i]);
    }
   }
  }
  else{
  if(ch[i]=='#')
  {
  while(stack[top]!=NULL)
  {
  pop();
  }
  }
  }
  break;
 }
 i++;
}
getch();
}