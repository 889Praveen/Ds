#include<stdio.h>
#include<conio.h>
void in(int arr[])
{
int i;

for(i=0;i<3;i++)
 {
 printf("\nEnter Element:");
 scanf("%d",&arr[i]);
 }
}
void dis(int arr[])
{
 int j;

 printf("Array:");
 for(j=0;j<3;j++)
 {
  printf(" %d ",arr[j]);
 }
}

void update(int arr[])
{
 int ele;
 int i,j;
 int ne;
 printf("\nPlz Enter Update Element:");
 scanf("%d",&ele);
 for(i=0;i<3;i++)
 {
  if(arr[i]==ele)
  {
     printf("\n Plz Enter New Element:");
     scanf("%d",&ne);
     arr[i]=ne;
  }
 }
//    printf("\nElement is not in Array..!");
}
/*void re(int arr[])
{
 int h;
 int ele,j;
 for(h=0;h<3;h++)
 {
  if(arr[h]==-1)
  {
     printf("\nArray is Empty..!");
     break;
  }
  else
  {
    printf("\nEnter Remove Element:");
    scanf("\n%d",&ele);
    for(j=0;j<3;j++)
    {
     if(arr[j]==ele)
     {
	 arr[j]=j+1;
	 break;
     }
     else
     {
      printf("\nElement is not in Array..!");
      break;
     }
    }
  }
 }
} */
void search(int arr[])
{
int i;
int ele;
printf("\nEnter Search Element:");
scanf("%d",&ele);
for(i=0;i<3;i++)
{
  if(arr[i]==ele)
  {
    printf("\nSearch Element:%d",arr[i]);
    break;
  }
}
  printf("\nElement is not in Array..!");
}
void sort(int arr[])
{
  int i,j,h,temp;

  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    if(arr[i]<arr[j])
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
   }
  }

  printf("\nSorted:");
  for(h=0;h<3;h++)
  {
    printf(" %d ",arr[h]);
  }

}
void main()
{
 int arr[3];
 int j,i;
 int ch;
// int lo=0,ha=5,mid=(lo+ha)/2;
 clrscr();
 for(i=0;i<3;i++)
 {
   arr[i]=0;
 }
 while(1)
 {
 printf("\nEnter 1 For Insert..");
 printf("\nEnter 2 For Remove..");
 printf("\nEnter 3 For Modify..");
 printf("\nEnter 4 For Sort..");
 printf("\nEnter 5 For Search..");
 printf("\nEnter 6 For Binary Search..");
 printf("\nEnter 7 For Display..");
 printf("\nEnter choice:");
 scanf("%d",&ch);
 switch(ch)
 {
   case 1:
	   in(arr);
	   break;
   case 2:
	   exit(0);
   case 7:
	   dis(arr);
	   break;
   case 3:
	   update(arr);
	   break;
   case 5:
	   search(arr);
	   break;
   case 4:
	   sort(arr);
	   break;

  }
 }

}

/*
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
} */