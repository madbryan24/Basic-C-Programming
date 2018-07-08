#include<stdio.h>

int main()

{

  int age;

  printf("Please enter your age: ");

  scanf("%d",&age);

  if(age<18)

    {

      printf("You are child \n");

    }

  if(age>=18 && age<65)

    {

      printf("You are adult \n");

    }

  if(age>=65)

    {

      printf("You are senior citizen \n");

    }

  return 0;

}

