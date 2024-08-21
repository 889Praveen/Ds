#include<stdio.h>
#include<conio.h>

struct student
{
 int rno;
 char name[20];
 float m;
};
void main()
{
struct student s[5];
int i,j;
clrscr();
for(i=0;i<5;i++)
{
 printf("No : ");
 scanf("%d",&s[i].rno);
 printf("\nName : ");
 scanf("%s",&s[i].name);
 printf("\nMarks : ");
 scanf("%f",&s[i].m);
}
for(j=0;j<5;j++)
{
 printf("\nNo : %d ",s[j].rno);
 printf("\nName : %s ",s[j].name);
 printf("Marks : %f ",s[i].m);
}
getch();
}