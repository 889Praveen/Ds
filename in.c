 int top=-01;
 char stack[10];
 int pre(char c)
 {
   if(c=='*'|| c=='/')
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
   if(stack[top]=='(' || stack[top]==')')
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
 void infix_prefix(char infix[])
 {
   int i=0;
   while(infix[i]!=';')
   {
   if(infix[i]=='(')
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
     else if(infix[i]=='+'|| infix[i]=='-'|| infix[i]=='*'|| infix[i]=='/')
     {
	if(top==-1)
	  {
	   push(infix[i]);
	  }
	else
	{
	  if(pre(infix[i])<=pre(stack[top]))
	  {
	  //pop();
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
     }
     else
     {
      if(infix[i]>='a'&& infix[i]<='z')
     {
       printf("%c",infix[i]);
     }
     }
     i++;
   }
  while(top!=-1)
  {
   pop();
  }
}
void main()
{
 char s[10];
 clrscr();
 printf("\nEnter the Expression:");
 scanf("%s",s);
 infix_prefix(s);
 getch();
}