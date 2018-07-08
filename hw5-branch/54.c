#include<stdio.h>

#include<string.h>

int main()

{

  int ticket;

  float pay;

  char movie[20],class[20],date[20];

  printf("please enter the name of the movie: ");

  scanf("%s",movie);

  printf("please enter your class(child,adult or seniorcitizen): ");

  scanf("%s",class);

  printf("please enter the date you want to see the movie(weekday or weekend): ");

  scanf("%s",date);

  if(strcmp(date,"weekday")==0)

    {

      ticket=7.0;

    }

  else

    {

      ticket=10.0;

    }

  if(strcmp(class,"child")==0)

    {

      pay=ticket*(0.5);

    }

  else if(strcmp(class,"seniorcitizen")==0)

    {

      pay=ticket*(0.7);

    }

  else

    {

      pay=ticket;

    }

  printf("Here is your ticket: \n Movie: %s \n Class: %s \n Date: %s \n Price: %f \n",movie,class,date,pay);

  return 0;

}
