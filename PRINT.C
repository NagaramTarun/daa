#include<stdio.h>
#include<conio.h>
void main(){
int a;
float b;
char c;
char str[10];
double d;
clrscr();
printf("READ THE INPUT VALUES: ");
scanf("%c %d %f %s %lf",&c,&a,&b,str,&d);
printf("\n The value of C = %c \n The value of A = %d \n The value of B = %f",c,a,b);
printf("\n The value of String = %s",str);
printf("\n The value of d = %lf",str);
getch();
}
