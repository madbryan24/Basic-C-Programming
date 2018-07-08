#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
  int n;
  printf("Please enter a positive number: ");
  scanf("%d",&n);
  if(n==1)
    {printf("n is not a prime number");}
  else if(n==2)
    {printf("n is a prime number");}
  if(n>2)
    { is_prime(n);
      if(is_prime(n)==0)
	{printf("n is not a prime number");}
      else if((is_prime(n)==1))
	{{printf("n is a prime number");}}
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
