#include<stdio.h>
#include<conio.h>

void main()
{
int s=10,i,sum=1,c=0;
clrscr();
for(i=0;i<=s;i++)
{
    if(c!=1){
     sum=sum+c;
     if(c==s){
     printf("%d .",sum);
     }
     else{
	printf("%d ,",sum);
     }
     }

   c++;

}
getch();
}