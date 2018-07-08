#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,value;
  printf("please enter the value of n: ");
  scanf("%d",&n);
  value=1;
  for(i=1;i<=n;i++)
    {
      value=value*i;
    }
  printf("n! = %d",value);
  return 0;
}
