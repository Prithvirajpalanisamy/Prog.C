#include<stdio.h>
int main()
{
int a;
clrscr();
printf("Enter the number");
scanf("%d",&a);
if(a>0)
printf("The number is positive");
else if(a<0)
printf("The number is negative");
else
printf("zero");
  getch();
  return 0;
}
