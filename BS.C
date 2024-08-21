#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,p,temp,h;
  int aa[5];
  int lo=0,ha=5,mid=(lo+ha)/2,ele;
  clrscr();
  for(p=0;p<5;p++)
  {
   printf("Enter Number of Element:");
   scanf("%d",&aa[p]);
  }
  for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   {
    if(aa[i]<aa[j])
    {
      temp=aa[i];
      aa[i]=aa[j];
      aa[j]=temp;
    }
   }
  }
  printf("\nSorted:");
  for(h=0;h<5;h++)
  {
    printf(" %d ",aa[h]);
  }
   printf("\nEnter sreach Element:");
   scanf("%d",&ele);
   for(i=0;i<5;i++)
   {
     mid=(lo+ha)/2;
   if(ele==aa[mid])
   {
    printf("%d",ele);
    break;
   }
   else if(ele<aa[mid])
	{
		ha=mid-1;
	}
	else if(ele>aa[mid])
	{
	lo=mid+1;
	}
   }
   if(i==5)
   {
    printf("not");
    }
  getch();
}