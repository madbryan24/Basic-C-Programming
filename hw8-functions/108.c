#include<stdio.h>
int ísLeapYear(int year);
int main()
{
  int year;
  printf("please enter the year: ");
  scanf("%d",&year);
  isLeapYear(year);
  if (isLeapYear(year)==1)
    {printf("%d is the leapyear \n",year);}
  else if(isLeapYear(year)==0)
    {printf("%d is not the leapyear \n",year);}
  return 0;
}
int isLeapYear(int year)
{
  int check;
  if ((year%400==0)||(year%4==0 && year%100!=0))
    {check=1;}
  else
    {check=0;}
  return check;
}
