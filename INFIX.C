#include<stdio.h>

char stack[20];
int top=-1;

int pre(char c)
{
 if(c=='*'||c=='/')
 {
  return 2;
 }
 else if(c=='+'||c=='-')
 {
  return 1;
 }
 return 0;
}
  void pop()
  {
      if(stack[top]=='('||stack[top]==')')
      {
          top--;
      }
      else
      {
     printf("%c",stack[top]);
     top--;
      }
  }
  void push(char ch)
  {
     top++;
     stack[top]=ch;
  }
 void pre_in(char infix[])
 {
  int i=0;
  while(infix[i]!=';')
  {
    if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' ||infix[i]=='('|| infix[i]==')')
    {
      if(top==-1)
      {
	   push(infix[i]);
      }
      else if(infix[i] == '(')
      {
          push(infix[i]);
      }
      else if(infix[i]==')')
      {
          while(stack[top]!='(')
          {
              pop();
          }
          pop();
      }
      else if(pre(infix[i])<=pre(stack[top]))
      {
	       while(pre(infix[i])<=pre(stack[top]))
	       {
	       pop();
	       }
	       push(infix[i]);
          
      }
      else
      {
      push(infix[i]);
      }
    }
    else
    {
      printf("%c",infix[i]);
    }
    i++;
 }
 while(top!=-1)
 {
 pop();
 }
}
int main()
{

 char m[20];

 printf("Enter Expression:");
 scanf("%s",m);
 pre_in(m);

return 0;
}