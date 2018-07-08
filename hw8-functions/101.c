#include<stdio.h>
double ke(double m,double v);
int main()
{
  double m,v;
  printf("please enter values of m-v: ");
  scanf("%lf%*c%lf",&m,&v);
  ke(m,v);
  printf("The kinetic energy is equal to %lf \n",ke(m,v));
  return 0;
}
double ke(double m, double v)
{
  double ke;
  ke=(1.0/2.0)*m*(v*v);
  return ke;
}
