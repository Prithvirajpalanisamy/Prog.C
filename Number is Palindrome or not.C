#include<stdio.h>
#include<conio.h>
main()
{

int n,num,rev=0;
clrscr();
printf("enter number to check palindrome ");
scanf("%d",&n);
num=n;
while(n!=0)
{
rev=(rev*10)+(num)
}
if (rev==num)
{
printf("enter number is a palindrome");
}
else
{
printf("enter number is not a palindrome");
}
getch();
return 0;
}
