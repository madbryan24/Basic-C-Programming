#include<stdio.h>
#include<stdlib.h>
int main()
{
  int choice;
  do
    {
      printf("Menu: \n 1. Noodle \n 2. Bread \n 3. Pizza \n 4. Pho \n 5. Exit\nPlease choose what you want:");
      scanf("%d",&choice);
      switch (choice)
	{
	case 1: printf("You chose Noodle \n");
	  break;
	case 2: printf("You chose Bread \n");
	  break;
	case 3: printf("You chose Pizza \n");
	  break;
	case 4: printf("You chose Pho \n");
	  break;
	case 5: exit(0); break;
	default: printf("Input not valid, please try again \n");
	  break;

	}
    }while(choice!=1&&choice!=2&&choice!=3&&choice!=4&&choice!=5);
  return 0;
}
