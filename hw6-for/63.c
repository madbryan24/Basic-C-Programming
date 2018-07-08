#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,c;
  for(n=1;n<=100;n++)
    {
      c=1;
      for(i=2;i<=sqrt((double)n);i++)
      {
	if(n%i == 0)
	  {
	    c=0;
	  }
      }
      if(c==1)
	{
	  printf("%d ",n);
	}
    }
  return 0;
}
