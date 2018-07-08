#include<stdio.h>
int main()
{
  int grade,sum=0,count=0;
  while(grade!=-1)
    {
      printf("Please enter your grade(enter -1 if you want to stop):");
      scanf("%d",&grade);
      sum += grade;
      count++;
    }
  printf("There are %d grades inputed in total, and SUM of grades is: %d",count-1,sum);
  return 0;
}
