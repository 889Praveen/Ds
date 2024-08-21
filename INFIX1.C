char stack[10],top=-1;
int prec(char ch)
{
if(ch=='*' || ch=='/')
{
 return 2;
}
else if(ch=='+'||ch=='-')
{
 return 1;
}
return 0;
}
void pop()
{
  if(top==-1)
  {
    printf("stack is empty:");
  }
  else
  {
   printf("%c",stack[top]);
   top--;
  }


}
void push(char ph)
{
  if(top==9)
  {
   printf("\n stack overflow");
  }
  else
  {
  top++;
  stack[top]=ph;
  }
}
void last()
{

}
void infi(char infix[])
{
  int j=0;
  while(infix[j]!=';')
  {
  if(infix[j]=='+' || infix[j]=='-'||infix[j]=='*'||infix[j]=='/')
   {
    if(top==-1)
    {
     push(infix[j]);
     }
     else if(prec(stack[top])>=prec(infix[j]))
     {
       while(prec(stack[top])>=prec(infix[j]))
       {
       pop();
       }
       push(infix[j]);
     }
     else
     {
	push(infix[j]);
     }
   }
   else{
   if(infix[j]>='a' && infix[j]<='z')
   {
    printf("%c",infix[j]);
   }else{
    if(infix[j]=='(')
    {
     printf("");
    }else{
     if(infix[j]==')')
     {
       while(top!=-1)
       {
	 pop();
       }
     }
    }
   }
   }
   j++;
  }
  while(top!=-1)
  {
   pop();
  }
}
void main()
{
  char pp[10];
  clrscr();
  printf("Enter Expression: ");
  scanf("%s",&pp);
  infi(pp);
  getch();
}