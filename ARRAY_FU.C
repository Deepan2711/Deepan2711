#include<stdio.h>
#include<conio.h>
int fun(int arr[]);
void main()
{
 int arr[5]={1,2,3,4,5};
 clrscr();
 fun(&arr[0]);
 getch();
}
int fun(int arr[])
{
 int i,sum=0;
 for(i=0;i<5;i++)
 {
 sum=sum+arr[i];
 }
  printf("sum is %d",sum);
  }