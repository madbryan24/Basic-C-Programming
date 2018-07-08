#include<stdio.h>

double wage(int hour);
int main()
{
  int hour;
  printf("please enter the time you have worked: ");
  scanf("%d",&hour);
  if(hour>=10 && hour<=65)
    {
      wage(hour);
      printf("The total wage is: %lf \n",wage(hour));
    }
  else
    {printf("time invalid");}
}
double wage(int hour)
{
  double wage;
  if(hour<=40)
    {wage=15000.0*hour;}
  else if(hour>40)
    {wage=15000.0*40.0+15000.0*1.5*(hour-40);}
  return wage;
}
