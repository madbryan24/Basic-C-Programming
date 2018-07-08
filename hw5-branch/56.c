#include<stdio.h>

#include<string.h>

int main()

{

  char type[20];

  float time,r,o,t;

  printf("please choose your type of cars(car,bus,truck): ");

  scanf("%s",type);

  printf("enter the amount of time you have driven: ");

  scanf("%f",&time);

  if(strcmp(type,"car")==0)

    {

      if(time<=2.0)

	{

	  t=time*0.7;

	  printf("your total fee is: %f",t);

	}

      else

	{

	  r=2.0*0.7;

	  o=(time-2.0)*2.5;

	  t=r+o;

	  printf("your total fee is: %f",t);

	}

    }

  else if(strcmp(type,"bus")==0)

    {

      if(time<=2.0)

	{

	  t=time*1.5;

	  printf("your total fee is: %f",t);

	}

      else

	{

	  r=2.0*1.5;

	  o=(time-2.0)*2;

	  t=r+o;

	  printf("your total fee is: %f",t);

	}

    }

  else if(strcmp(type,"truck")==0)

    {

      if(time<=2.0)

	{

	  t=time*2.5;

	  printf("your total fee is: %f",t);

	}

      else

	{

	  r=2.0*2.5;

	  o=(time-2.0)*3.25;

	  t=r+o;

	  printf("your total fee is: %f",t);

	}

    }

  else

    {

      printf("type of vehicle is wrong \n");

    }

  return 0;

}

