#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],n,i;
 clrscr();
 printf("Enter array size:");
 scanf("%d",&n);
 printf("Enter the array value:");
 for(i=0;i<n;i++)
 scanf("%f",&a[i]);
 printf("\nThe array value are:");
 for(i=0;i<n;i++)
 printf("%f \n",a[i]);
 getch();
 }
