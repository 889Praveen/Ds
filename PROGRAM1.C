#include<stdio.h>
#include<conio.h>
int insert(int arr[],int top)
{
int ele;
 if(top==4)
 {
  printf("\nArray is Overflow..\n");
 }
 else
 {
 printf("\nEnter Element:");
 scanf("%d",&ele);
 top=top+1;
 arr[top]=ele;
 }
 return top;
}
void Display(int arr[],int top)
{
 int j;
 if(top==-1)
 {
  printf("\nArray is Empty...!\n");
  }
  else
  {
   printf("Array:");
    for(j=0;j<=top;j++)
     {
      printf(" %d ",arr[j]);
     }
  }
}
void update(int arr[],int top)
{
 int ele;
 int i,j,count=0;
 int New;
 if(top==-1)
 {
  printf("\nArray is Empty..!");
 }
  else
  {
    printf("\nEnter Update Element:");
    scanf("%d",&ele);
      for(i=0;i<=top;i++)
       {
	if(arr[i]==ele)
	  {
	    printf("\nEnter New Element:");
	    scanf("%d",&New);
	    arr[i]=New;
	    count++;
	  }
       }
    }
    if(count==1)
     {
       printf("\nElement is Successfuly Update..\n");
     }
     else
     {
       printf("\nElement is Not in Array..!\n");
     }

}
int Delete(int arr[],int top)
{
 int count=0;
 int ele,i;

  if(top==-1)
  {
     printf("\nArray is Empty..!");
  }
  else
  {
    printf("\nEnter Remove Element:");
    scanf("\n%d",&ele);
    for(i=0;i<=top;i++)
    {
     if(arr[i]==ele)
     {
	 arr[i]=arr[i+1];
	 count++;
	 break;
     }
    }
    top--;
  if(count==1)
  {
   printf("\nRemove Element Successfull..\n");
  }
  else
  {
    printf("\nElement is Not in Array....!\n");
  }
  }
  return top;
 }
void search(int arr[],int top)
{
int i;
int ele;
int count=0;

printf("\nEnter Search Element:");
scanf("%d",&ele);
for(i=0;i<=top;i++)
{
  if(arr[i]==ele)
  {
    printf("\nPosition is: %d",i);
    count++;
    break;
  }
}
  if(count==0)
  {
   printf("\nElement is Not in Array..!\n");
  }
}
void sort(int arr[])
{
  int i,j,h,temp;

  for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
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
  for(h=0;h<5;h++)
  {
    printf(" %d ",arr[h]);
  }

}
void bins(int arr[],int top,int lo,int ha,int mid)
{
 int ele,i,j,temp,count=0;
 int a[5];

 for(i=0;i<=top;i++)
  {
   for(j=0;j<=top;j++)
   {
    if(arr[i]<arr[j])
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
   }
  }
   for(i=0;i<=top;i++)
 {
   a[i]=arr[i];
 }
 printf("Sorted:");
  for(i=0;i<=top;i++)
  {
    printf(" %d ",a[i]);
  }
 printf("\nEnter Sreach Element:");
   scanf("%d",&ele);
   for(i=0;i<=top;i++)
   {
     mid=(lo+ha)/2;

   if(ele==a[mid])
   {
    printf("Position of %d is :%d",ele,mid);
    count++;
    break;
   }
   else if(ele<a[mid])
	{
		ha=mid-1;
	}
	else if(ele>a[mid])
	{
	lo=mid+1;
	}
   }
   if(count==0)
   {
    printf("\nElement is Not in Array..!");
   }

}
void main()
{
 int arr[5];
 int j,i,top=-1;
 int ch;
 int lo=0,ha=4,mid=(lo+ha)/2;
 clrscr();
 for(i=0;i<5;i++)
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
	  top=insert(arr,top);
	   break;
   case 2:
	   top=Delete(arr,top);
	   break;
   case 7:
	   Display(arr,top);
	   break;
   case 3:
	   update(arr,top);
	   break;
   case 5:
	   search(arr,top);
	   break;
   case 4:
	   sort(arr);
	   break;
   case 6:
	  bins(arr,top,lo,ha,mid);
	  break;
   case 8:
		 exit(0);
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
