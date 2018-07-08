#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,value;
  printf("please enter the value of n: ");
  scanf("%d",&n);
  value=1;
  i=1;
  while(i<=n)
    {
      value=value*i;
      i++;
    }
  printf("n! = %d",value);
  return 0;
}
