#include<stdio.h>
#include<conio.h>
struct student
{
 int rno;
 char name[20];
};
 void input(struct student s[])
 {

  int i;
  for(i=0;i<4;i++)
  {
  printf("Enter student roll no :  ");
  scanf("%d",&s[i].rno);
  printf("\nEnter student name  :  ");
  scanf("%s",&s[i].name);

  }

 }
 void display(struct student s[])
  {
 int i;

 for(i=0;i<4;i++)
  {
   printf("\nRoll no : %d\nName : %s ",s[i].rno,s[i].name);
  }
 }
 void sort(struct student srt[])
 {
 struct student temp[1];
  int i,j;
  for(i=0;i<4;i++)
  {
    for(j=i+1;j<4;j++)
    {
     if(srt[i].rno>srt[j].rno)
     {
      temp[0]=srt[i];
      srt[i]=srt[j];
      srt[j]=temp[0];
     }
    }
  }
 }
 void main()
 {
 struct student s1[4];
 clrscr();
 input(s1);
 printf("\nBefore sorting");
 display(s1);
 sort(s1);
 printf("\nAfter sorting");
 display(s1);
 getch();

 }