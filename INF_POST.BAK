#include<stdio.h>
#include<conio.h>
char infix[10];
char stack[10];
int top=-1;
void push(char ch)
{
 if(top==9)
 {
  printf("Stack is overflow");
 }
 else
 {
 top+=1;
 stack[top]=ch;
 }

}
void pop()
{
 if(top==-1)
 {
  printf("Stack is underflow");
 }
 else
 {
 printf("%c",stack[top]);
 top-=1;
 }

}
int prec(char ch)
{
 int p;
 if(ch=='+'||ch=='-')
 {
  p=1;
 }
 else{
   p=2;
 }
 return p;
}
void infTopf()
{
 int i=0;
 char cg=infix[i];
 while(1)
 {
  cg=infix[i];
  if(cg>='a' && cg<='z')
  {
   printf("%c",cg);
  }
  else
  {
   if(cg=='+' || cg=='-' || cg=='*' || cg=='/')
   {
    if(top==-1)
    {
    push(cg);
    }
    else
    {
     if(prec(cg)<=prec(stack[top]))
     {
      pop();
      push(cg);
     }
     else
     {
     push(cg);
     }
    }
   }
   else
   {
    if(cg==';')
    {
    while(top!=-1)
    {
     pop();
    }
    break;
    }
   }
  }
  i++;
 }
}
void main()
{
clrscr();
printf("Enter infix : ");
scanf("%s",infix);
//printf("%c",infix[0]);
infTopf();
getch();
}