#include<stdio.h>
int main()
{
  int n;
  for(n=1;n<=100;n++)
    {
      if(n%2==1 && n>27)
	{
	  printf("%d ",n);
	}
    }
  return 0;
}
