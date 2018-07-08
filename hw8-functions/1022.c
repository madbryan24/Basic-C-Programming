#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
  int n,m;
  printf("Please enter a positive number: ");
  scanf("%d",&n);
  if(n<=2)
    {printf("there is no  prime number less than n");}
  else if(n==3)
    {printf("prime number less than n is 2");}
  else if(n>3)
    {
      for(m=3;m<=n;m++)
	{
	  is_prime(m);
	  if(is_prime(m)==1)
	    {printf("%d ",m);}
	}
    }
  else
    {printf("value invalid \n");}
  return 0;
}
int is_prime(int n)
{
  int check,i;
  for(i=2;i<n;i++)
    {
      if(n%i!=0)
	{check=1;}
      else
	{
	  check=0;
	  break;
	}
    }
  return check;
}

