#include<stdio.h>

int main()

{

  int a,b,c;

  char op[10];

  printf("please enter the value of a-b: ");

  scanf("%d-%d",&a,&b);

  printf("Choose the operator you want: addition,subtraction,multiplication,division:");

  scanf("%s",op);

  if(op=="addition")

    {

      c=a+b;

      printf("%d = %d + %d",c,a,b);

    }

  else if(op=="subtraction")

    {

      c=a-b;

      printf("%d = %d - %d",c,a,b);

    }

  else if(op=="multiplication")

    {

      c=a*b;

      printf("%d = %d * %d",c,a,b);

    }

  else

    {

      c=a/b;

      printf("%d = %d / %d",c,a,b);

    }

  return 0;


}
