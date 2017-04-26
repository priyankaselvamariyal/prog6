#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int yr;
printf("enter the year:");
scanf("%d",&yr);
if(yr%4==0)
{
if(yr%100==0)
{
if(yr%400==0)
{
printf("year is leap year");
}
}
}
else
{
printf("not a leap yr");
}
getch();
}
