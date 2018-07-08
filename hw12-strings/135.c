#include<stdio.h>
#include<ctype.h>
#include<string.h>
int strend(char string1[],char string2[]);
void main()
{
    char string1[100],string2[100];
    printf("please input the string1: ");
    gets(string1);
    printf("please input the string2: ");
    gets(string2);
        printf("%d \n",strend(string1,string2));
}
int strend(char string1[],char string2[])
{
    if(string1[strlen(string1)-1]==string2[0])
        return 1;
    else return 0;
}
